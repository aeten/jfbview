/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                           *
 *  Copyright (C) 2012 Chuan Ji <jichuan89@gmail.com>                        *
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the "License");          *
 *  you may not use this file except in compliance with the License.         *
 *  You may obtain a copy of the License at                                  *
 *                                                                           *
 *   http://www.apache.org/licenses/LICENSE-2.0                              *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an "AS IS" BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Implementation for methods declared in document.hpp.

#include "document.hpp"

Document::OutlineItem::~OutlineItem() {
  for (std::vector<OutlineItem *>::iterator i = _children.begin();
       i != _children.end(); ++i) {
    delete *i;
  }
}

const std::string &Document::OutlineItem::GetTitle() const {
  return _title;
}

int Document::OutlineItem::GetChildrenCount() const {
  return _children.size();
}

const Document::OutlineItem *Document::OutlineItem::GetChild(int i) {
  return _children[i];
}
