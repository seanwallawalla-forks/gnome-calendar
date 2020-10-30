/* gcal-event-editor-dialog.h
 *
 * Copyright (C) 2015 Erick Pérez Castellanos <erickpc@gnome.org>
 *               2020 Georges Basile Stavracas Neto <gbsneto@gnome.org>
 *
 * gnome-calendar is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * gnome-calendar is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "gcal-event.h"
#include "gcal-manager.h"


G_BEGIN_DECLS

#define GCAL_RESPONSE_DELETE_EVENT 2
#define GCAL_RESPONSE_SAVE_EVENT   4
#define GCAL_RESPONSE_CREATE_EVENT 6

#define GCAL_TYPE_EVENT_EDITOR_DIALOG (gcal_event_editor_dialog_get_type ())
G_DECLARE_FINAL_TYPE (GcalEventEditorDialog, gcal_event_editor_dialog, GCAL, EVENT_EDITOR_DIALOG, GtkDialog);

GtkWidget*           gcal_event_editor_dialog_new                (void);

void                 gcal_event_editor_dialog_set_event_is_new   (GcalEventEditorDialog *dialog,
                                                                  gboolean               event_is_new);

GcalEvent*           gcal_event_editor_dialog_get_event          (GcalEventEditorDialog *self);

void                 gcal_event_editor_dialog_set_event          (GcalEventEditorDialog *self,
                                                                  GcalEvent             *event);

gboolean             gcal_event_editor_dialog_get_recurrence_changed   (GcalEventEditorDialog *self);

GcalRecurrenceModType gcal_event_editor_dialog_get_recurrence_mod_type (GcalEventEditorDialog *self);

G_END_DECLS
