// Licensed to Pioneers in Engineering under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  Pioneers in Engineering licenses
// this file to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
//  with the License.  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License

#ifndef NGL_REFC_H_
#define NGL_REFC_H_

#include <ngl_obj.h>
#include <ngl_alloc.h>
#include <ngl_val.h>

ngl_uint ngl_refc(ngl_obj * obj);
void ngl_refd(ngl_obj * obj);
void ngl_refi(ngl_obj * obj);

#endif  // NGL_REFC_H_