/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

typedef enum {
  SORT_METHOD_NONE=0,
  SORT_METHOD_LABEL,
  SORT_METHOD_LABEL_IGNORE_THE,
  SORT_METHOD_DATE,
  SORT_METHOD_SIZE,
  SORT_METHOD_FILE,
  SORT_METHOD_DRIVE_TYPE,
  SORT_METHOD_TRACKNUM,
  SORT_METHOD_DURATION,
  SORT_METHOD_TITLE,
  SORT_METHOD_TITLE_IGNORE_THE,
  SORT_METHOD_ARTIST,
  SORT_METHOD_ARTIST_AND_YEAR,
  SORT_METHOD_ARTIST_IGNORE_THE,
  SORT_METHOD_ALBUM,
  SORT_METHOD_ALBUM_IGNORE_THE,
  SORT_METHOD_GENRE,
  SORT_METHOD_COUNTRY,
  SORT_METHOD_YEAR,
  SORT_METHOD_VIDEO_RATING,
  SORT_METHOD_VIDEO_USER_RATING,
  SORT_METHOD_DATEADDED,
  SORT_METHOD_PROGRAM_COUNT,
  SORT_METHOD_PLAYLIST_ORDER,
  SORT_METHOD_EPISODE,
  SORT_METHOD_VIDEO_TITLE,
  SORT_METHOD_VIDEO_SORT_TITLE,
  SORT_METHOD_VIDEO_SORT_TITLE_IGNORE_THE,
  SORT_METHOD_PRODUCTIONCODE,
  SORT_METHOD_SONG_RATING,
  SORT_METHOD_SONG_USER_RATING,
  SORT_METHOD_MPAA_RATING,
  SORT_METHOD_VIDEO_RUNTIME,
  SORT_METHOD_STUDIO,
  SORT_METHOD_STUDIO_IGNORE_THE,
  SORT_METHOD_FULLPATH,
  SORT_METHOD_LABEL_IGNORE_FOLDERS,
  SORT_METHOD_LASTPLAYED,
  SORT_METHOD_PLAYCOUNT,
  SORT_METHOD_LISTENERS,
  SORT_METHOD_UNSORTED,
  SORT_METHOD_CHANNEL,
  SORT_METHOD_CHANNEL_NUMBER,
  SORT_METHOD_BITRATE,
  SORT_METHOD_DATE_TAKEN,
  SORT_METHOD_CLIENT_CHANNEL_ORDER,
  SORT_METHOD_TOTAL_DISCS,
  SORT_METHOD_MAX
} SORT_METHOD;
