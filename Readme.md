# TEST PLAN:

## Table 1: High Level Test Plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H_001 | Check if code is taking input or not | All integers | Integers | PASS | Requirement based |
| H_002 | Check if array is created or not | Of given size n | N sized integers | PASS | Requirement based |
| H_003 | Check if array is not having null value | Not null values | Success | PASS | Requirement based |
| H_004 | Check if sorted array is displayed properly | Of given size n | N sized integers | PASS | Requirement based |




## Table 2: Low Level Test Plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_001  |H_001,H_002|Check if values inputted must be in specific array size n| All integers| SUCCESS | SUCCESS | Technical |
|  L_002  |H_001,H_002,H_003,H_004|Check if array is properly sorting during program execution| Integers | SUCCESS | SUCCESS | Technical |
