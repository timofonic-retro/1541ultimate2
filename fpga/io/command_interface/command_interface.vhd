library ieee;
    use ieee.std_logic_1164.all;
    use ieee.numeric_std.all;
    
library work;
    use work.io_bus_pkg.all;
    use work.slot_bus_pkg.all;

entity command_interface is
port (
    clock           : in  std_logic;
    reset           : in  std_logic;
    
    -- C64 side interface
    slot_req        : in  t_slot_req;
    slot_resp       : out t_slot_resp;
    
    -- io interface for local cpu
    io_req          : in  t_io_req; -- we get an 8K range
    io_resp         : out t_io_resp );

end entity;


architecture gideon of command_interface is
    signal io_req_regs  : t_io_req;
    signal io_resp_regs : t_io_resp;

    signal io_req_ram   : t_io_req;
    signal io_resp_ram  : t_io_resp;

    signal io_ram_en    : std_logic;
    signal io_ram_rdata : std_logic;
    signal io_ram_ack   : std_logic;
begin
    -- first we split our I/O bus in 4 ranges, of 2K each.
    i_split: entity work.io_bus_splitter
    generic map (
        g_range_lo  => 11,
        g_range_hi  => 12,
        g_ports     => 2 )
    port map (
        clock    => sys_clock,
        
        req      => io_req,
        resp     => io_resp,
        
        reqs(0)  => io_req_regs,
        reqs(1)  => io_req_ram,
        
        resps(0) => io_resp_regs,
        resps(1) => io_resp_ram );

    process(clock)
    begin
        if rising_edge(clock) then
            io_ram_ack <= io_ram_en;
        end if;
    end process;
    io_ram_en        <= io_req.read or io_req.write;
    io_resp_ram.data <= X"00" when io_ram_ack='0' else io_ram_rdata;

    i_ram: entity work.dpram
    generic (
        g_width_bits            => 8,
        g_depth_bits            => 11,
        g_read_first_a          => false,
        g_read_first_b          => false,
        g_storage               => "block" )

    port (
        a_clock                 => clock,
        a_address               => io_req_ram.address(10 downto 0),
        a_rdata                 => io_ram_rdata,
        a_wdata                 => io_req_ram.data,
        a_en                    => io_ram_en,
        a_we                    => io_req_ram.write,

        b_clock                 => clock,
        b_address               => ,
        b_rdata                 => ,
        b_wdata                 => ,
        b_en                    => ,
        b_we                    => ,


    p_control: process(clock)
    begin
        if reset='1' then
        end if;
    end process;

end architecture;