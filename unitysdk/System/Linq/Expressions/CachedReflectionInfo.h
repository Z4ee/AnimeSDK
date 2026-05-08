#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_ADDRULE_OFFSET UNITYSDK_OFFSET(0x1B6CAD10)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_BIND_OFFSET UNITYSDK_OFFSET(0x1B6CAF70)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CLEARMATCH_OFFSET UNITYSDK_OFFSET(0x1B6CA720)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CREATEMATCHMAKER_OFFSET UNITYSDK_OFFSET(0x1B6CA4C0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETCACHEDRULES_OFFSET UNITYSDK_OFFSET(0x1B6CABE0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETMATCH_OFFSET UNITYSDK_OFFSET(0x1B6CA5F0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULECACHE_OFFSET UNITYSDK_OFFSET(0x1B6CAAB0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULES_OFFSET UNITYSDK_OFFSET(0x1B6CA980)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_MOVERULE_OFFSET UNITYSDK_OFFSET(0x1B6CAE40)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_SETNOTMATCHED_OFFSET UNITYSDK_OFFSET(0x1B6CA390)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_UPDATERULES_OFFSET UNITYSDK_OFFSET(0x1B6CA850)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DATETIME_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1B6CCD60)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_INT32_INT32_INT32_BOOL_BYTE_OFFSET UNITYSDK_OFFSET(0x1B6CC610)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_INT32_OFFSET UNITYSDK_OFFSET(0x1B6CC050)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_INT64_OFFSET UNITYSDK_OFFSET(0x1B6CC330)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_UINT32_OFFSET UNITYSDK_OFFSET(0x1B6CC1C0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_UINT64_OFFSET UNITYSDK_OFFSET(0x1B6CC4A0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1B6CCC00)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_MINUSONE_OFFSET UNITYSDK_OFFSET(0x1B6CCAA0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1B6CCB50)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_ONE_OFFSET UNITYSDK_OFFSET(0x1B6CC9F0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_BYTE_OFFSET UNITYSDK_OFFSET(0x1B6CDD40)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_CHAR_OFFSET UNITYSDK_OFFSET(0x1B6CE840)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_INT16_OFFSET UNITYSDK_OFFSET(0x1B6CE000)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_INT32_OFFSET UNITYSDK_OFFSET(0x1B6CE2C0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_INT64_OFFSET UNITYSDK_OFFSET(0x1B6CE580)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_SBYTE_OFFSET UNITYSDK_OFFSET(0x1B6CDEA0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_UINT16_OFFSET UNITYSDK_OFFSET(0x1B6CE160)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_UINT32_OFFSET UNITYSDK_OFFSET(0x1B6CE420)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_UINT64_OFFSET UNITYSDK_OFFSET(0x1B6CE6E0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_ZERO_OFFSET UNITYSDK_OFFSET(0x1B6CCCB0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DICTIONARYOFSTRINGINT32_ADD_STRING_INT32_OFFSET UNITYSDK_OFFSET(0x1B6CD770)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DICTIONARYOFSTRINGINT32_CTOR_INT32_OFFSET UNITYSDK_OFFSET(0x1B6CD970)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1B6CBB50)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x1B6CB7C0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B6CBDB0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x1B6CB690)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B6CB300)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYGETINDEX_OFFSET UNITYSDK_OFFSET(0x1B6CB430)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1B6CB0A0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B6CBA20)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYINVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CB8F0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYSETINDEX_OFFSET UNITYSDK_OFFSET(0x1B6CB560)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYSETMEMBER_OFFSET UNITYSDK_OFFSET(0x1B6CB1D0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1B6CBC80)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_INVALIDCASTEXCEPTION_CTOR_STRING_OFFSET UNITYSDK_OFFSET(0x1B6CA220)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_MATH_POW_DOUBLE_DOUBLE_OFFSET UNITYSDK_OFFSET(0x1B6CE9A0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_METHODBASE_GETMETHODFROMHANDLE_RUNTIMEMETHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6CCE10)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_METHODBASE_GETMETHODFROMHANDLE_RUNTIMEMETHODHANDLE_RUNTIMETYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6CCF70)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_METHODINFO_CREATEDELEGATE_TYPE_OBJECT_OFFSET UNITYSDK_OFFSET(0x1B6CD170)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_NULLABLE_BOOLEAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CBEE0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_OBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1B6CDC10)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_EQUALS_STRING_STRING_OFFSET UNITYSDK_OFFSET(0x1B6CD570)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_FORMAT_STRING_OBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1B6CA020)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_OP_EQUALITY_STRING_STRING_OFFSET UNITYSDK_OFFSET(0x1B6CD370)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_TYPE_GETTYPEFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6CDAE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CachedReflectionInfo_TypeDefinitionIndex = 4392;

	class CachedReflectionInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_s_String_Format_String_ObjectArray()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4330);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryConvert()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4338);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_AddRule()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4340);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryInvokeMember()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4348);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_InvalidCastException_Ctor_String()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4350);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_UInt64()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4358);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_GetRules()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4360);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_ClearMatch()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4368);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_String_op_Equality_String_String()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4370);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_Int64()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4378);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryGetMember()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4380);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_Nullable_Boolean_Ctor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4388);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryGetIndex()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4390);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_UpdateRules()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4398);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_Int32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43A0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryDeleteMember()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43A8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_GetCachedRules()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43B0);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_Decimal_Ctor_UInt64()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43B8);
		}
		static ::System::Reflection::FieldInfo** StaticGet_s_Decimal_MinusOne()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43C0);
		}
		static ::System::Reflection::FieldInfo** StaticGet_s_Decimal_MaxValue()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_MethodBase_GetMethodFromHandle_RuntimeMethodHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_Byte()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43D8);
		}
		static ::System::Reflection::FieldInfo** StaticGet_s_Decimal_One()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43E0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryBinaryOperation()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43E8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryInvoke()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43F0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_Char()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x43F8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_GetMatch()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4400);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_UInt32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4408);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TrySetMember()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4410);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Math_Pow_Double_Double()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4418);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_Decimal_Ctor_Int32()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4420);
		}
		static ::System::Reflection::FieldInfo** StaticGet_s_Decimal_Zero()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4428);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_String_Equals_String_String()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4430);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_SetNotMatched()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4438);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryCreateInstance()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4440);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_MethodInfo_CreateDelegate_Type_Object()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4448);
		}
		static ::System::Reflection::FieldInfo** StaticGet_s_DateTime_MinValue()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4450);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_MoveRule()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4458);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_DictionaryOfStringInt32_Ctor_Int32()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4460);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_MethodBase_GetMethodFromHandle_RuntimeMethodHandle_RuntimeTypeHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4468);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_Decimal_Ctor_Int32_Int32_Int32_Bool_Byte()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4470);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_Decimal_Ctor_Int64()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4478);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Type_GetTypeFromHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4480);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_SByte()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4488);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TrySetIndex()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4490);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryDeleteIndex()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x4498);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_GetRuleCache()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44A0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_Int16()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44A8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DictionaryOfStringInt32_Add_String_Int32()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44B0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_DynamicObject_TryUnaryOperation()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44B8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_Bind()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44C0);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_s_Decimal_Ctor_UInt32()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44C8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_CallSiteOps_CreateMatchmaker()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Object_GetType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44D8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Decimal_op_Implicit_UInt16()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44E0);
		}
		static ::System::Reflection::FieldInfo** StaticGet_s_Decimal_MinValue()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x44E8);
		}

		static ::System::Reflection::MethodInfo* get_String_Format_String_ObjectArray()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_FORMAT_STRING_OBJECTARRAY_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_InvalidCastException_Ctor_String()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_INVALIDCASTEXCEPTION_CTOR_STRING_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_SetNotMatched()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_SETNOTMATCHED_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_CreateMatchmaker()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CREATEMATCHMAKER_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_GetMatch()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETMATCH_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_ClearMatch()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CLEARMATCH_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_UpdateRules()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_UPDATERULES_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_GetRules()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULES_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_GetRuleCache()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULECACHE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_GetCachedRules()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETCACHEDRULES_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_AddRule()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_ADDRULE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_MoveRule()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_MOVERULE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CallSiteOps_Bind()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_BIND_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryGetMember()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYGETMEMBER_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TrySetMember()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYSETMEMBER_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryDeleteMember()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYDELETEMEMBER_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryGetIndex()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYGETINDEX_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TrySetIndex()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYSETINDEX_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryDeleteIndex()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYDELETEINDEX_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryConvert()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYCONVERT_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryInvoke()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYINVOKE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryInvokeMember()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYINVOKEMEMBER_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryBinaryOperation()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYBINARYOPERATION_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryUnaryOperation()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYUNARYOPERATION_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DynamicObject_TryCreateInstance()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DYNAMICOBJECT_TRYCREATEINSTANCE_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_Nullable_Boolean_Ctor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_NULLABLE_BOOLEAN_CTOR_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_Decimal_Ctor_Int32()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_INT32_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_Decimal_Ctor_UInt32()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_UINT32_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_Decimal_Ctor_Int64()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_INT64_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_Decimal_Ctor_UInt64()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_UINT64_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_Decimal_Ctor_Int32_Int32_Int32_Bool_Byte()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_CTOR_INT32_INT32_INT32_BOOL_BYTE_OFFSET))();
		}

		static ::System::Reflection::FieldInfo* get_Decimal_One()
		{
			return ((::System::Reflection::FieldInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_ONE_OFFSET))();
		}

		static ::System::Reflection::FieldInfo* get_Decimal_MinusOne()
		{
			return ((::System::Reflection::FieldInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_MINUSONE_OFFSET))();
		}

		static ::System::Reflection::FieldInfo* get_Decimal_MinValue()
		{
			return ((::System::Reflection::FieldInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_MINVALUE_OFFSET))();
		}

		static ::System::Reflection::FieldInfo* get_Decimal_MaxValue()
		{
			return ((::System::Reflection::FieldInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_MAXVALUE_OFFSET))();
		}

		static ::System::Reflection::FieldInfo* get_Decimal_Zero()
		{
			return ((::System::Reflection::FieldInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_ZERO_OFFSET))();
		}

		static ::System::Reflection::FieldInfo* get_DateTime_MinValue()
		{
			return ((::System::Reflection::FieldInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DATETIME_MINVALUE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_MethodBase_GetMethodFromHandle_RuntimeMethodHandle()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_METHODBASE_GETMETHODFROMHANDLE_RUNTIMEMETHODHANDLE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_MethodBase_GetMethodFromHandle_RuntimeMethodHandle_RuntimeTypeHandle()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_METHODBASE_GETMETHODFROMHANDLE_RUNTIMEMETHODHANDLE_RUNTIMETYPEHANDLE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_MethodInfo_CreateDelegate_Type_Object()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_METHODINFO_CREATEDELEGATE_TYPE_OBJECT_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_String_op_Equality_String_String()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_OP_EQUALITY_STRING_STRING_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_String_Equals_String_String()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_EQUALS_STRING_STRING_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_DictionaryOfStringInt32_Add_String_Int32()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DICTIONARYOFSTRINGINT32_ADD_STRING_INT32_OFFSET))();
		}

		static ::System::Reflection::ConstructorInfo* get_DictionaryOfStringInt32_Ctor_Int32()
		{
			return ((::System::Reflection::ConstructorInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DICTIONARYOFSTRINGINT32_CTOR_INT32_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Type_GetTypeFromHandle()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_TYPE_GETTYPEFROMHANDLE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Object_GetType()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_OBJECT_GETTYPE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_Byte()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_BYTE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_SByte()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_SBYTE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_Int16()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_INT16_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_UInt16()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_UINT16_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_Int32()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_INT32_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_UInt32()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_UINT32_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_Int64()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_INT64_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_UInt64()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_UINT64_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Decimal_op_Implicit_Char()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_DECIMAL_OP_IMPLICIT_CHAR_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Math_Pow_Double_Double()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_MATH_POW_DOUBLE_DOUBLE_OFFSET))();
		}
	};
}
