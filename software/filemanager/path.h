#ifndef PATH_H
#define PATH_H

#include "cached_tree_node.h"

class FileManager;

class Path
{
private:
    friend class FileManager;
    mstring full_path;
    CachedTreeNode *current_dir_node;

    int cd_single(char *p);

    Path();
    ~Path();

public:
    const char *owner;
    int cd(char *p);
    char *get_path(void);
    int get_directory(IndexedList<FileInfo *> &target);

};


#endif
