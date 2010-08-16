/*
* foo_alsong_lyric														
* Copyright (C) 2007-2010 Inseok Lee <dlunch@gmail.com>
*
* This library is free software; you can redistribute it and/or modify it 
* under the terms of the GNU Lesser General Public License as published 
* by the Free Software Foundation; version 2.1 of the License.
*
* This library is distributed in the hope that it will be useful, 
* but WITHOUT ANY WARRANTY; without even the implied warranty of 
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
* See the GNU Lesser General Public License for more details.
*
* You can receive a copy of the GNU Lesser General Public License from 
* http://www.gnu.org/
*/

#include "stdafx.h"
#include "ConfigStore.h"

const GUID guid_cfg_outer_shown = 
{ 0x44eefa62, 0x996e, 0x4480, { 0xaa, 0x72, 0x98, 0xef, 0xb6, 0xf0, 0xcd, 0xd2 } };
cfg_bool cfg_outer_shown(guid_cfg_outer_shown, false);

const GUID guid_cfg_outer_topmost = // {337F0BB2-5A5B-4bd5-A845-6C146F887838}
{ 0x337f0bb2, 0x5a5b, 0x4bd5, { 0xa8, 0x45, 0x6c, 0x14, 0x6f, 0x88, 0x78, 0x38 } };
cfg_bool cfg_outer_topmost(guid_cfg_outer_topmost, false);

const GUID guid_cfg_outer_window_placement = 
{ 0xcd3ac2f2, 0x1951, 0x4821, { 0x9f, 0xfa, 0x7, 0x23, 0x3b, 0x57, 0x1d, 0x17 } };
cfg_window_placement cfg_outer_window_placement(guid_cfg_outer_window_placement);

const GUID guid_cfg_outer_transparency = // {05F4DB24-8352-4f22-9901-78AC304FAD8A}
{ 0x5f4db24, 0x8352, 0x4f22, { 0x99, 0x1, 0x78, 0xac, 0x30, 0x4f, 0xad, 0x8a } };
cfg_int cfg_outer_transparency(guid_cfg_outer_transparency, 100);

const GUID guid_cfg_outer_layered = // {F2CC0F3A-735F-46b9-8FA2-6B8313A69B2C}
{ 0xf2cc0f3a, 0x735f, 0x46b9, { 0x8f, 0xa2, 0x6b, 0x83, 0x13, 0xa6, 0x9b, 0x2c } };
cfg_bool cfg_outer_layered(guid_cfg_outer_layered, false);

const GUID guid_cfg_outer_border = // {425D9FC1-06DD-4ba8-9366-D47D142A066E}
{ 0x425d9fc1, 0x6dd, 0x4ba8, { 0x93, 0x66, 0xd4, 0x7d, 0x14, 0x2a, 0x6, 0x6e } };
cfg_bool cfg_outer_border(guid_cfg_outer_border, false);

const GUID guid_cfg_outer_script = // {11F4AB00-D59F-4ded-B84B-6AD6751EAB13}
{ 0x11f4ab00, 0xd59f, 0x4ded, { 0xb8, 0x4b, 0x6a, 0xd6, 0x75, 0x1e, 0xab, 0x13 } };
cfg_string cfg_outer_script(guid_cfg_outer_script, "");

const GUID guid_cfg_outer = // {77FC7D79-8B1F-4611-BBB9-CB6A57D2A98A}
{ 0x77fc7d79, 0x8b1f, 0x4611, { 0xbb, 0xb9, 0xcb, 0x6a, 0x57, 0xd2, 0xa9, 0x8a } };
cfg_struct_t<UIPreference> cfg_outer(guid_cfg_outer, NULL);

const GUID guid_cfg_outer_nolayered = // {A49F5228-C65A-4DA3-A4F9-BE4BC8BF2417}
{ 0xa49f5228, 0xc65a, 0x4da3, { 0xa4, 0xf9, 0xbe, 0x4b, 0xc8, 0xbf, 0x24, 0x17 } };
cfg_bool cfg_outer_nolayered(guid_cfg_outer_nolayered, false);

const GUID guid_cfg_enabledlyricsource = // {9F12B01E-0824-4C27-9792-CE81213AF873}
{ 0x9f12b01e, 0x824, 0x4c27, { 0x97, 0x92, 0xce, 0x81, 0x21, 0x3a, 0xf8, 0x73 } };
cfg_lyricsource_var cfg_enabledlyricsource(guid_cfg_enabledlyricsource);

const GUID guid_cfg_lyricsourcecfg= // {D3BF60D1-633A-40D9-A9AC-68F21214AD96}
{ 0xd3bf60d1, 0x633a, 0x40d9, { 0xa9, 0xac, 0x68, 0xf2, 0x12, 0x14, 0xad, 0x96 } };
cfg_lyricsourcecfg_var cfg_lyricsourcecfg(guid_cfg_lyricsourcecfg);
