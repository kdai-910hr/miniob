/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

#include "sql/operator/group_by_vec_physical_operator.h"

RC GroupByVecPhysicalOperator::open(Trx *trx) {
  // ASSERT(children_.size() == 1, "group by operator only support one child, but got %d", children_.size());

  // PhysicalOperator &child = *children_[0];
  // RC                rc    = child.open(trx);
  // if (OB_FAIL(rc)) {
  //   LOG_INFO("failed to open child operator. rc=%s", strrc(rc));
  //   return rc;
  // }
  
  // Chunk input_chunk;
  // while (child.next(input_chunk) == RC::SUCCESS)
  // {
  //   for (size_t i = 0; i < input_chunk.rows(); i++)
  //   {
  //     auto col = input_chunk.column_ptr(i);

  //   }
  // }
  return RC::SUCCESS;

}