#!/bin/bash

#
# author {
#  name "Muhammet Kara"
#  email "muhammetk@gmail.com"
#  website "muhammetkara.com"
# }
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.
#

git remote add upstream https://github.com/mrkara/AcikKaynakGelistirme.git

git fetch upstream

git checkout main

git rebase upstream/main

git push
