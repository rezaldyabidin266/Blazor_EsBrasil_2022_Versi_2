#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
174,
179,
180,
181,
182,
183,
184,
185,
187,
188,
234,
235,
237,
260,
261,
262,
272,
273,
274,
275,
276,
343,
344,
345,
348,
380,
381,
383,
385,
387,
389,
394,
402,
403,
404,
405,
406,
407,
408,
409,
410,
411,
506,
507,
514,
517,
519,
524,
525,
527,
528,
532,
533,
534,
535,
537,
538,
539,
542,
544,
545,
546,
606,
607,
609,
617,
618,
619,
620,
621,
625,
626,
627,
628,
629,
630,
632,
633,
634,
636,
637,
638,
640,
820,
963,
964,
4966,
4967,
4969,
4970,
4971,
4972,
4973,
4975,
4977,
4979,
4980,
4987,
4989,
4993,
4994,
4996,
4998,
5000,
5012,
5021,
5022,
5024,
5025,
5026,
5027,
5028,
5030,
5032,
5856,
5860,
5862,
5863,
5864,
5865,
5909,
5910,
5911,
5926,
5927,
5928,
5929,
5960,
6003,
6013,
6014,
6015,
6263,
6265,
6266,
6290,
6291,
6292,
6306,
6312,
6319,
6329,
6332,
6400,
6406,
6407,
6408,
6409,
6415,
6428,
6448,
6449,
6457,
6459,
6466,
6467,
6470,
6472,
6477,
6483,
6484,
6491,
6493,
6503,
6506,
6507,
6508,
6518,
6529,
6535,
6536,
6537,
6539,
6540,
6550,
6568,
6581,
6600,
6624,
6625,
6958,
7087,
7264,
7265,
7268,
7271,
7319,
7470,
7471,
8380,
8399,
8406,
8407,
8409,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 174,
ves_icall_System_Array_InternalCreate,
// token 179,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 180,
ves_icall_System_Array_CanChangePrimitive,
// token 181,
ves_icall_System_Array_FastCopy_raw,
// token 182,
ves_icall_System_Array_GetLength_raw,
// token 183,
ves_icall_System_Array_GetLowerBound_raw,
// token 184,
ves_icall_System_Array_GetGenericValue_icall,
// token 185,
ves_icall_System_Array_GetValueImpl_raw,
// token 187,
ves_icall_System_Array_SetValueImpl_raw,
// token 188,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 234,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 235,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 237,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 260,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 261,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 262,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 272,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 273,
ves_icall_System_Enum_ToObject_raw,
// token 274,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 275,
ves_icall_System_Enum_get_underlying_type_raw,
// token 276,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 343,
ves_icall_System_Environment_get_ProcessorCount,
// token 344,
ves_icall_System_Environment_get_TickCount,
// token 345,
ves_icall_System_Environment_get_TickCount64,
// token 348,
ves_icall_System_Environment_FailFast_raw,
// token 380,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 381,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 383,
ves_icall_System_GC_SuppressFinalize_raw,
// token 385,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 387,
ves_icall_System_GC_GetGCMemoryInfo,
// token 389,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 394,
ves_icall_System_Object_MemberwiseClone_raw,
// token 402,
ves_icall_System_Math_Abs_double,
// token 403,
ves_icall_System_Math_Ceiling,
// token 404,
ves_icall_System_Math_Cos,
// token 405,
ves_icall_System_Math_Floor,
// token 406,
ves_icall_System_Math_Log10,
// token 407,
ves_icall_System_Math_Pow,
// token 408,
ves_icall_System_Math_Sin,
// token 409,
ves_icall_System_Math_Sqrt,
// token 410,
ves_icall_System_Math_Tan,
// token 411,
ves_icall_System_Math_ModF,
// token 506,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 507,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 514,
ves_icall_RuntimeType_make_array_type_raw,
// token 517,
ves_icall_RuntimeType_make_byref_type_raw,
// token 519,
ves_icall_RuntimeType_MakePointerType_raw,
// token 524,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 525,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 527,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 528,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 532,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 533,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 534,
ves_icall_System_RuntimeType_getFullName_raw,
// token 535,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 537,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 538,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 539,
ves_icall_RuntimeType_GetFields_native_raw,
// token 542,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 544,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 545,
ves_icall_RuntimeType_get_Name_raw,
// token 546,
ves_icall_RuntimeType_get_Namespace_raw,
// token 606,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 607,
ves_icall_reflection_get_token_raw,
// token 609,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 617,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 618,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 619,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 620,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 621,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 625,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 626,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 627,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 628,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 629,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 630,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 632,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 633,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 634,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 636,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 637,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 638,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 640,
ves_icall_System_String_FastAllocateString_raw,
// token 820,
ves_icall_System_Type_internal_from_handle_raw,
// token 963,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 964,
ves_icall_System_ValueType_Equals_raw,
// token 4966,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 4967,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 4969,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 4970,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 4971,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 4972,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 4973,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 4975,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 4977,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 4979,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 4980,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 4987,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 4989,
mono_monitor_exit_icall_raw,
// token 4993,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 4994,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 4996,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 4998,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5000,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5012,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5021,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5022,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5024,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5025,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5026,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5027,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5028,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5030,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5032,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5856,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5860,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5862,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5863,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5864,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5865,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 5909,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 5910,
ves_icall_System_GCHandle_InternalFree_raw,
// token 5911,
ves_icall_System_GCHandle_InternalGet_raw,
// token 5926,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 5927,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 5928,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 5929,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 5960,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6003,
mono_object_hash_icall_raw,
// token 6013,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6014,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6015,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6263,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6265,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6266,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6290,
mono_digest_get_public_token,
// token 6291,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6292,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6306,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6312,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6319,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6329,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6332,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6400,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6406,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6407,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6408,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6409,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6415,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6428,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6448,
ves_icall_reflection_get_token_raw,
// token 6449,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6457,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6459,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6466,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6467,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6470,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6472,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6477,
ves_icall_reflection_get_token_raw,
// token 6483,
ves_icall_get_method_info_raw,
// token 6484,
ves_icall_get_method_attributes,
// token 6491,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6493,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6503,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6506,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6507,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6508,
ves_icall_reflection_get_token_raw,
// token 6518,
ves_icall_InternalInvoke_raw,
// token 6529,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6535,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6536,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6537,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6539,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6540,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6550,
ves_icall_InternalInvoke_raw,
// token 6568,
ves_icall_reflection_get_token_raw,
// token 6581,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6600,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6624,
ves_icall_reflection_get_token_raw,
// token 6625,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 6958,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7087,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7264,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7265,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7268,
ves_icall_ModuleBuilder_getToken_raw,
// token 7271,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7319,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7470,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7471,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8380,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8399,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8406,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8407,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8409,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
