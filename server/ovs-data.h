
/* Copyright (c) 2015 Open Networking Foundation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OVS_DATA_H
#define OVS_DATA_H 1

#ifndef DEFAULT_OVS_DBPATH
#define DEFAULT_OVS_DBPATH  "unix:/var/run/openvswitch/db.sock"
#endif

#ifndef DEFAULT_OVS_OFSOCKET_DIR
#define DEFAULT_OVS_OFSOCKET_DIR	"/var/run/openvswitch"
#endif

#ifndef OFC_VERBOSITY
#define OFC_VERBOSITY   0
#endif

typedef struct ofconf {
    struct ovsdb_idl *idl;
    unsigned int seqno;
    struct vconn *vconn;
} ofconf_t;

ofconf_t *ofconf_init(const char *ovs_db_path);

char *get_state_data(ofconf_t *ofc);

void ofconf_destroy(ofconf_t **ofconf);


#endif /* ovs-data.h */