/*
 * Elastic Binary Trees - exported functions for Indirect Multi-Byte data nodes.
 * Version 6.0
 * (C) 2002-2010 - Willy Tarreau <w@1wt.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

/* Consult ebimtree.h for more details about those functions */

#include "ebpttree.h"
#include "ebimtree.h"

/* Find the first occurence of a key of <len> bytes in the tree <root>.
 * If none can be found, return NULL.
 */
REGPRM3 struct ebpt_node *
ebim_lookup(struct eb_root *root, const void *x, unsigned int len)
{
	return __ebim_lookup(root, x, len);
}

/* Insert ebpt_node <new> into subtree starting at node root <root>.
 * Only new->key needs be set with the key. The ebpt_node is returned.
 * If root->b[EB_RGHT]==1, the tree may only contain unique keys. The
 * len is specified in bytes.
 */
REGPRM3 struct ebpt_node *
ebim_insert(struct eb_root *root, struct ebpt_node *new, unsigned int len)
{
	return __ebim_insert(root, new, len);
}
