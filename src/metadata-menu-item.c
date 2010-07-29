/* metadata-menu-item.c generated by valac, the Vala compiler
 * generated from metadata-menu-item.vala, do not modify */

/*
Copyright 2010 Canonical Ltd.

Authors:
    Conor Curran <conor.curran@canonical.com>

This program is free software: you can redistribute it and/or modify it 
under the terms of the GNU General Public License version 3, as published 
by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR 
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <libdbusmenu-glib/client.h>
#include <libdbusmenu-glib/menuitem-proxy.h>
#include <libdbusmenu-glib/menuitem.h>
#include <libdbusmenu-glib/server.h>
#include <common-defs.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_PLAYER_ITEM (player_item_get_type ())
#define PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_ITEM, PlayerItem))
#define PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_ITEM, PlayerItemClass))
#define IS_PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_ITEM))
#define IS_PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_ITEM))
#define PLAYER_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_ITEM, PlayerItemClass))

typedef struct _PlayerItem PlayerItem;
typedef struct _PlayerItemClass PlayerItemClass;
typedef struct _PlayerItemPrivate PlayerItemPrivate;

#define TYPE_METADATA_MENUITEM (metadata_menuitem_get_type ())
#define METADATA_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_METADATA_MENUITEM, MetadataMenuitem))
#define METADATA_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_METADATA_MENUITEM, MetadataMenuitemClass))
#define IS_METADATA_MENUITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_METADATA_MENUITEM))
#define IS_METADATA_MENUITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_METADATA_MENUITEM))
#define METADATA_MENUITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_METADATA_MENUITEM, MetadataMenuitemClass))

typedef struct _MetadataMenuitem MetadataMenuitem;
typedef struct _MetadataMenuitemClass MetadataMenuitemClass;
typedef struct _MetadataMenuitemPrivate MetadataMenuitemPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PlayerItem {
	DbusmenuMenuitem parent_instance;
	PlayerItemPrivate * priv;
};

struct _PlayerItemClass {
	DbusmenuMenuitemClass parent_class;
};

struct _MetadataMenuitem {
	PlayerItem parent_instance;
	MetadataMenuitemPrivate * priv;
};

struct _MetadataMenuitemClass {
	PlayerItemClass parent_class;
};


static gpointer metadata_menuitem_parent_class = NULL;

GType player_item_get_type (void) G_GNUC_CONST;
GType metadata_menuitem_get_type (void) G_GNUC_CONST;
enum  {
	METADATA_MENUITEM_DUMMY_PROPERTY
};
void player_item_reset (PlayerItem* self, GeeHashSet* attrs);
GeeHashSet* metadata_menuitem_attributes_format (void);
MetadataMenuitem* metadata_menuitem_new (void);
MetadataMenuitem* metadata_menuitem_construct (GType object_type);



MetadataMenuitem* metadata_menuitem_construct (GType object_type) {
	MetadataMenuitem * self;
	GeeHashSet* _tmp0_;
	self = (MetadataMenuitem*) g_object_new (object_type, "item-type", DBUSMENU_METADATA_MENUITEM_TYPE, NULL);
	player_item_reset ((PlayerItem*) self, _tmp0_ = metadata_menuitem_attributes_format ());
	_g_object_unref0 (_tmp0_);
	return self;
}


MetadataMenuitem* metadata_menuitem_new (void) {
	return metadata_menuitem_construct (TYPE_METADATA_MENUITEM);
}


GeeHashSet* metadata_menuitem_attributes_format (void) {
	GeeHashSet* result = NULL;
	GeeHashSet* attrs;
	attrs = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL);
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_METADATA_MENUITEM_TITLE);
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_METADATA_MENUITEM_ARTIST);
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_METADATA_MENUITEM_ALBUM);
	gee_abstract_collection_add ((GeeAbstractCollection*) attrs, DBUSMENU_METADATA_MENUITEM_ARTURL);
	result = attrs;
	return result;
}


static void metadata_menuitem_class_init (MetadataMenuitemClass * klass) {
	metadata_menuitem_parent_class = g_type_class_peek_parent (klass);
}


static void metadata_menuitem_instance_init (MetadataMenuitem * self) {
}


GType metadata_menuitem_get_type (void) {
	static volatile gsize metadata_menuitem_type_id__volatile = 0;
	if (g_once_init_enter (&metadata_menuitem_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MetadataMenuitemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) metadata_menuitem_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MetadataMenuitem), 0, (GInstanceInitFunc) metadata_menuitem_instance_init, NULL };
		GType metadata_menuitem_type_id;
		metadata_menuitem_type_id = g_type_register_static (TYPE_PLAYER_ITEM, "MetadataMenuitem", &g_define_type_info, 0);
		g_once_init_leave (&metadata_menuitem_type_id__volatile, metadata_menuitem_type_id);
	}
	return metadata_menuitem_type_id__volatile;
}




