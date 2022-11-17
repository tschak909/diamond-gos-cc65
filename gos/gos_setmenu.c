/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Initalizes a new menu bar for Diamond
 * @param menu_bar Address of Menu Bar
 * @param menu_tree Address of menu trees
 */
void gos_setmenu(void* menu_bar, void* menu_trees)
{
  W0=menu_bar;
  W1=menu_trees;
  gos(8);
}
