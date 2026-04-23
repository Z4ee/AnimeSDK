#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberFilter; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }

#define SYSTEM_TYPE_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x178986C0)
#define SYSTEM_TYPE_CREATEBINDER_OFFSET UNITYSDK_OFFSET(0x17894B40)
#define SYSTEM_TYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17899340)
#define SYSTEM_TYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x178992F0)
#define SYSTEM_TYPE_FINDINTERFACES_OFFSET UNITYSDK_OFFSET(0x17895640)
#define SYSTEM_TYPE_FINDMEMBERS_OFFSET UNITYSDK_OFFSET(0x17896030)
#define SYSTEM_TYPE_FORMATTYPENAME_1_OFFSET UNITYSDK_OFFSET(0x178990C0)
#define SYSTEM_TYPE_FORMATTYPENAME_OFFSET UNITYSDK_OFFSET(0x178990A0)
#define SYSTEM_TYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x17894D10)
#define SYSTEM_TYPE_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x17894F70)
#define SYSTEM_TYPE_GETCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x17894E80)
#define SYSTEM_TYPE_GETCONSTRUCTOR_2_OFFSET UNITYSDK_OFFSET(0x17894F40)
#define SYSTEM_TYPE_GETCONSTRUCTOR_3_OFFSET UNITYSDK_OFFSET(0x17899BE0)
#define SYSTEM_TYPE_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17894D70)
#define SYSTEM_TYPE_GETDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x17895FE0)
#define SYSTEM_TYPE_GETENUMDATA_OFFSET UNITYSDK_OFFSET(0x17897940)
#define SYSTEM_TYPE_GETENUMNAMES_OFFSET UNITYSDK_OFFSET(0x178978A0)
#define SYSTEM_TYPE_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x178989A0)
#define SYSTEM_TYPE_GETENUMRAWCONSTANTVALUES_OFFSET UNITYSDK_OFFSET(0x17897F70)
#define SYSTEM_TYPE_GETENUMUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x17897FA0)
#define SYSTEM_TYPE_GETENUMVALUES_OFFSET UNITYSDK_OFFSET(0x17897ED0)
#define SYSTEM_TYPE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x178958A0)
#define SYSTEM_TYPE_GETEVENT_OFFSET UNITYSDK_OFFSET(0x17895880)
#define SYSTEM_TYPE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x17895600)
#define SYSTEM_TYPE_GETFIELD_1_OFFSET UNITYSDK_OFFSET(0x17899C30)
#define SYSTEM_TYPE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x178955E0)
#define SYSTEM_TYPE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x17897780)
#define SYSTEM_TYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x17897440)
#define SYSTEM_TYPE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x17897840)
#define SYSTEM_TYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17899380)
#define SYSTEM_TYPE_GETINTERFACEMAP_OFFSET UNITYSDK_OFFSET(0x178993E0)
#define SYSTEM_TYPE_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x17895620)
#define SYSTEM_TYPE_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x17895FC0)
#define SYSTEM_TYPE_GETMEMBER_1_OFFSET UNITYSDK_OFFSET(0x17895F30)
#define SYSTEM_TYPE_GETMEMBER_2_OFFSET UNITYSDK_OFFSET(0x17895F60)
#define SYSTEM_TYPE_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x17895F10)
#define SYSTEM_TYPE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x178955C0)
#define SYSTEM_TYPE_GETMETHOD_1_OFFSET UNITYSDK_OFFSET(0x17895120)
#define SYSTEM_TYPE_GETMETHOD_2_OFFSET UNITYSDK_OFFSET(0x17895270)
#define SYSTEM_TYPE_GETMETHOD_3_OFFSET UNITYSDK_OFFSET(0x178953B0)
#define SYSTEM_TYPE_GETMETHOD_4_OFFSET UNITYSDK_OFFSET(0x178954B0)
#define SYSTEM_TYPE_GETMETHOD_5_OFFSET UNITYSDK_OFFSET(0x17895550)
#define SYSTEM_TYPE_GETMETHOD_6_OFFSET UNITYSDK_OFFSET(0x17899B90)
#define SYSTEM_TYPE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x17894FD0)
#define SYSTEM_TYPE_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x17895ED0)
#define SYSTEM_TYPE_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x17895EF0)
#define SYSTEM_TYPE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17895EB0)
#define SYSTEM_TYPE_GETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x17895970)
#define SYSTEM_TYPE_GETPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x17895A50)
#define SYSTEM_TYPE_GETPROPERTY_3_OFFSET UNITYSDK_OFFSET(0x17895AE0)
#define SYSTEM_TYPE_GETPROPERTY_4_OFFSET UNITYSDK_OFFSET(0x17895BB0)
#define SYSTEM_TYPE_GETPROPERTY_5_OFFSET UNITYSDK_OFFSET(0x17895C80)
#define SYSTEM_TYPE_GETPROPERTY_6_OFFSET UNITYSDK_OFFSET(0x17895D50)
#define SYSTEM_TYPE_GETPROPERTY_7_OFFSET UNITYSDK_OFFSET(0x17895E20)
#define SYSTEM_TYPE_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x178958C0)
#define SYSTEM_TYPE_GETROOTELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x178973F0)
#define SYSTEM_TYPE_GETTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x17899160)
#define SYSTEM_TYPE_GETTYPECODEIMPL_OFFSET UNITYSDK_OFFSET(0x17894A80)
#define SYSTEM_TYPE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x17894A50)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_1_OFFSET UNITYSDK_OFFSET(0x17894980)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_2_OFFSET UNITYSDK_OFFSET(0x178949C0)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_3_OFFSET UNITYSDK_OFFSET(0x17894A00)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_OFFSET UNITYSDK_OFFSET(0x17894940)
#define SYSTEM_TYPE_GETTYPEFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x178701B0)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_1_OFFSET UNITYSDK_OFFSET(0x17894870)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_2_OFFSET UNITYSDK_OFFSET(0x178948B0)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_3_OFFSET UNITYSDK_OFFSET(0x178948F0)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_OFFSET UNITYSDK_OFFSET(0x17894830)
#define SYSTEM_TYPE_GETTYPEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17894C40)
#define SYSTEM_TYPE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x17894C50)
#define SYSTEM_TYPE_GETTYPE_1_OFFSET UNITYSDK_OFFSET(0x17894620)
#define SYSTEM_TYPE_GETTYPE_2_OFFSET UNITYSDK_OFFSET(0x17894660)
#define SYSTEM_TYPE_GETTYPE_3_OFFSET UNITYSDK_OFFSET(0x17899440)
#define SYSTEM_TYPE_GETTYPE_4_OFFSET UNITYSDK_OFFSET(0x178995F0)
#define SYSTEM_TYPE_GETTYPE_5_OFFSET UNITYSDK_OFFSET(0x178997F0)
#define SYSTEM_TYPE_GETTYPE_6_OFFSET UNITYSDK_OFFSET(0x178996F0)
#define SYSTEM_TYPE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x178945A0)
#define SYSTEM_TYPE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17896C00)
#define SYSTEM_TYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x178972E0)
#define SYSTEM_TYPE_GET_DECLARINGMETHOD_OFFSET UNITYSDK_OFFSET(0x17894580)
#define SYSTEM_TYPE_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x17894570)
#define SYSTEM_TYPE_GET_DEFAULTBINDER_OFFSET UNITYSDK_OFFSET(0x17894AF0)
#define SYSTEM_TYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17896C10)
#define SYSTEM_TYPE_GET_GENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x17897280)
#define SYSTEM_TYPE_GET_GENERICTYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x178977E0)
#define SYSTEM_TYPE_GET_HASELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x17896DC0)
#define SYSTEM_TYPE_GET_HASPROXYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17897550)
#define SYSTEM_TYPE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x17897000)
#define SYSTEM_TYPE_GET_ISANSICLASS_OFFSET UNITYSDK_OFFSET(0x17897160)
#define SYSTEM_TYPE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x178971E0)
#define SYSTEM_TYPE_GET_ISAUTOCLASS_OFFSET UNITYSDK_OFFSET(0x178971B0)
#define SYSTEM_TYPE_GET_ISAUTOLAYOUT_OFFSET UNITYSDK_OFFSET(0x17896ED0)
#define SYSTEM_TYPE_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x178974D0)
#define SYSTEM_TYPE_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x17896F30)
#define SYSTEM_TYPE_GET_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x17897500)
#define SYSTEM_TYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x17897220)
#define SYSTEM_TYPE_GET_ISCONTEXTFUL_OFFSET UNITYSDK_OFFSET(0x17897530)
#define SYSTEM_TYPE_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x17897040)
#define SYSTEM_TYPE_GET_ISEXPLICITLAYOUT_OFFSET UNITYSDK_OFFSET(0x17896F10)
#define SYSTEM_TYPE_GET_ISEXPORTEDTOWINDOWSRUNTIME_OFFSET UNITYSDK_OFFSET(0x17897520)
#define SYSTEM_TYPE_GET_ISGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x17897270)
#define SYSTEM_TYPE_GET_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x17897210)
#define SYSTEM_TYPE_GET_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x17897200)
#define SYSTEM_TYPE_GET_ISIMPORT_OFFSET UNITYSDK_OFFSET(0x178970B0)
#define SYSTEM_TYPE_GET_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x17896F80)
#define SYSTEM_TYPE_GET_ISLAYOUTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x17896EF0)
#define SYSTEM_TYPE_GET_ISMARSHALBYREF_OFFSET UNITYSDK_OFFSET(0x17897540)
#define SYSTEM_TYPE_GET_ISNESTEDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17896E70)
#define SYSTEM_TYPE_GET_ISNESTEDFAMANDASSEM_OFFSET UNITYSDK_OFFSET(0x17896E90)
#define SYSTEM_TYPE_GET_ISNESTEDFAMILY_OFFSET UNITYSDK_OFFSET(0x17896E50)
#define SYSTEM_TYPE_GET_ISNESTEDFAMORASSEM_OFFSET UNITYSDK_OFFSET(0x17896EB0)
#define SYSTEM_TYPE_GET_ISNESTEDPRIVATE_OFFSET UNITYSDK_OFFSET(0x17896E30)
#define SYSTEM_TYPE_GET_ISNESTEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x17896DD0)
#define SYSTEM_TYPE_GET_ISNESTED_OFFSET UNITYSDK_OFFSET(0x17896BE0)
#define SYSTEM_TYPE_GET_ISNOTPUBLIC_OFFSET UNITYSDK_OFFSET(0x17896E10)
#define SYSTEM_TYPE_GET_ISPOINTER_OFFSET UNITYSDK_OFFSET(0x178974E0)
#define SYSTEM_TYPE_GET_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x178974F0)
#define SYSTEM_TYPE_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x17896DF0)
#define SYSTEM_TYPE_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x17897020)
#define SYSTEM_TYPE_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x17898B40)
#define SYSTEM_TYPE_GET_ISSECURITYSAFECRITICAL_OFFSET UNITYSDK_OFFSET(0x17898B90)
#define SYSTEM_TYPE_GET_ISSECURITYTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x17898BE0)
#define SYSTEM_TYPE_GET_ISSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x178970D0)
#define SYSTEM_TYPE_GET_ISSPECIALNAME_OFFSET UNITYSDK_OFFSET(0x17897090)
#define SYSTEM_TYPE_GET_ISSZARRAY_1_OFFSET UNITYSDK_OFFSET(0x17899590)
#define SYSTEM_TYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x178971F0)
#define SYSTEM_TYPE_GET_ISUNICODECLASS_OFFSET UNITYSDK_OFFSET(0x17897180)
#define SYSTEM_TYPE_GET_ISUSERTYPE_OFFSET UNITYSDK_OFFSET(0x17899B80)
#define SYSTEM_TYPE_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17896F70)
#define SYSTEM_TYPE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x17896C60)
#define SYSTEM_TYPE_GET_ISWINDOWSRUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17897510)
#define SYSTEM_TYPE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x17894560)
#define SYSTEM_TYPE_GET_NEEDSREFLECTIONSECURITYCHECK_OFFSET UNITYSDK_OFFSET(0x17898C30)
#define SYSTEM_TYPE_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x17894590)
#define SYSTEM_TYPE_GET_STRUCTLAYOUTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x178946F0)
#define SYSTEM_TYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x17894BF0)
#define SYSTEM_TYPE_GET_TYPEINITIALIZER_OFFSET UNITYSDK_OFFSET(0x17894F90)
#define SYSTEM_TYPE_HASPROXYATTRIBUTEIMPL_OFFSET UNITYSDK_OFFSET(0x17897770)
#define SYSTEM_TYPE_IMPLEMENTINTERFACE_OFFSET UNITYSDK_OFFSET(0x17898FD0)
#define SYSTEM_TYPE_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x17899B20)
#define SYSTEM_TYPE_INTERNAL_FROM_HANDLE_OFFSET UNITYSDK_OFFSET(0x17899C80)
#define SYSTEM_TYPE_INTERNAL_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x178995E0)
#define SYSTEM_TYPE_INVOKEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x17894BC0)
#define SYSTEM_TYPE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x17894B80)
#define SYSTEM_TYPE_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x17898DF0)
#define SYSTEM_TYPE_ISCONTEXTFULIMPL_OFFSET UNITYSDK_OFFSET(0x178976B0)
#define SYSTEM_TYPE_ISENUMDEFINED_OFFSET UNITYSDK_OFFSET(0x17898090)
#define SYSTEM_TYPE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17899090)
#define SYSTEM_TYPE_ISEXPORTEDTOWINDOWSRUNTIMEIMPL_OFFSET UNITYSDK_OFFSET(0x17897600)
#define SYSTEM_TYPE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x17898DB0)
#define SYSTEM_TYPE_ISINTEGERTYPE_OFFSET UNITYSDK_OFFSET(0x178984E0)
#define SYSTEM_TYPE_ISMARSHALBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x17897710)
#define SYSTEM_TYPE_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x17898D60)
#define SYSTEM_TYPE_ISVALUETYPEIMPL_OFFSET UNITYSDK_OFFSET(0x17897560)
#define SYSTEM_TYPE_ISWINDOWSRUNTIMEOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x178975B0)
#define SYSTEM_TYPE_MAKEARRAYTYPE_1_OFFSET UNITYSDK_OFFSET(0x178947E0)
#define SYSTEM_TYPE_MAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x17894790)
#define SYSTEM_TYPE_MAKEBYREFTYPE_OFFSET UNITYSDK_OFFSET(0x17894740)
#define SYSTEM_TYPE_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x17897650)
#define SYSTEM_TYPE_MAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x178946A0)
#define SYSTEM_TYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17894A70)
#define SYSTEM_TYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x178701E0)
#define SYSTEM_TYPE_REFLECTIONONLYGETTYPE_OFFSET UNITYSDK_OFFSET(0x178998B0)
#define SYSTEM_TYPE_RUNTIMERESOLVE_OFFSET UNITYSDK_OFFSET(0x17899B30)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETIDSOFNAMES_OFFSET UNITYSDK_OFFSET(0x178994F0)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x17899450)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x178994A0)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17899540)
#define SYSTEM_TYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17899110)
#define SYSTEM_TYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17899CA0)
#define SYSTEM_TYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17894550)

namespace System
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 349;

	class Type : public ::System::Reflection::MemberInfo
	{
	public:
		static ::System::Reflection::MemberFilter** StaticGet_FilterName()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x8E0);
		}
		static ::System::Reflection::Binder** StaticGet_defaultBinder()
		{
			return (::System::Reflection::Binder**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x8E8);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x8F0);
		}
		static ::System::Reflection::MemberFilter** StaticGet_FilterNameIgnoreCase()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x8F8);
		}
		static ::System::Reflection::MemberFilter** StaticGet_FilterAttribute()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x900);
		}
		static ::System::Object** StaticGet_Missing()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x908);
		}
		static ::System::Char* StaticGet_Delimiter()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x470);
		}
		// static const ::System::Reflection::BindingFlags DefaultLookup; // 0x0
		// static const ::System::Reflection::BindingFlags DeclaredOnlyLookup; // 0x0
		::System::RuntimeTypeHandle _impl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE__CCTOR_OFFSET))();
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_DeclaringMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_DECLARINGMETHOD_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		static ::System::Type* GetType(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_OFFSET))(typeName, assemblyResolver, typeResolver);
		}

		static ::System::Type* GetType_1(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_1_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError);
		}

		static ::System::Type* GetType_2(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_2_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase);
		}

		::System::Type* MakePointerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEPOINTERTYPE_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* get_StructLayoutAttribute()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_STRUCTLAYOUTATTRIBUTE_OFFSET))(this);
		}

		::System::Type* MakeByRefType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEBYREFTYPE_OFFSET))(this);
		}

		::System::Type* MakeArrayType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEARRAYTYPE_OFFSET))(this);
		}

		::System::Type* MakeArrayType_1(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEARRAYTYPE_1_OFFSET))(this, rank);
		}

		static ::System::Type* GetTypeFromProgID(::System::String* progID)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_OFFSET))(progID);
		}

		static ::System::Type* GetTypeFromProgID_1(::System::String* progID, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_1_OFFSET))(progID, throwOnError);
		}

		static ::System::Type* GetTypeFromProgID_2(::System::String* progID, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_2_OFFSET))(progID, server);
		}

		static ::System::Type* GetTypeFromProgID_3(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_3_OFFSET))(progID, server, throwOnError);
		}

		static ::System::Type* GetTypeFromCLSID(::System::Guid clsid)
		{
			return ((::System::Type*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_OFFSET))(clsid);
		}

		static ::System::Type* GetTypeFromCLSID_1(::System::Guid clsid, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_1_OFFSET))(clsid, throwOnError);
		}

		static ::System::Type* GetTypeFromCLSID_2(::System::Guid clsid, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_2_OFFSET))(clsid, server);
		}

		static ::System::Type* GetTypeFromCLSID_3(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_3_OFFSET))(clsid, server, throwOnError);
		}

		static ::System::TypeCode GetTypeCode(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPECODE_OFFSET))(type);
		}

		::System::TypeCode GetTypeCodeImpl()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPECODEIMPL_OFFSET))(this);
		}

		static ::System::Reflection::Binder* get_DefaultBinder()
		{
			return ((::System::Reflection::Binder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_DEFAULTBINDER_OFFSET))();
		}

		static ::System::Void CreateBinder()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_CREATEBINDER_OFFSET))();
		}

		::System::Object* InvokeMember(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INVOKEMEMBER_OFFSET))(this, name, invokeAttr, binder, target, args, culture);
		}

		::System::Object* InvokeMember_1(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INVOKEMEMBER_1_OFFSET))(this, name, invokeAttr, binder, target, args);
		}

		::System::RuntimeTypeHandle get_TypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_TYPEHANDLE_OFFSET))(this);
		}

		::System::RuntimeTypeHandle GetTypeHandleInternal()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEHANDLEINTERNAL_OFFSET))(this);
		}

		static ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* o)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEHANDLE_OFFSET))(o);
		}

		::System::Int32 GetArrayRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETARRAYRANK_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* GetConstructor_1(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_1_OFFSET))(this, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* GetConstructor_2(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_2_OFFSET))(this, types);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors()
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTORS_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_TypeInitializer()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_TYPEINITIALIZER_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethod(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_OFFSET))(this, name, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::MethodInfo* GetMethod_1(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_1_OFFSET))(this, name, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::MethodInfo* GetMethod_2(::System::String* name, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_2_OFFSET))(this, name, types, modifiers);
		}

		::System::Reflection::MethodInfo* GetMethod_3(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_3_OFFSET))(this, name, types);
		}

		::System::Reflection::MethodInfo* GetMethod_4(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_4_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::MethodInfo* GetMethod_5(::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_5_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods()
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHODS_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETFIELD_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETFIELDS_OFFSET))(this);
		}

		::System::Type* GetInterface(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETINTERFACE_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Type*>* FindInterfaces(::System::Reflection::TypeFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::TypeFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FINDINTERFACES_OFFSET))(this, filter, filterCriteria);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* name)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETEVENT_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents()
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETEVENTS_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* GetProperty(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* GetProperty_1(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_1_OFFSET))(this, name, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* GetProperty_2(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_2_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::PropertyInfo* GetProperty_3(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_3_OFFSET))(this, name, returnType, types);
		}

		::System::Reflection::PropertyInfo* GetProperty_4(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_4_OFFSET))(this, name, types);
		}

		::System::Reflection::PropertyInfo* GetProperty_5(::System::String* name, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_5_OFFSET))(this, name, returnType);
		}

		::System::Reflection::PropertyInfo* GetProperty_6(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_6_OFFSET))(this, name, bindingAttr, returnType);
		}

		::System::Reflection::PropertyInfo* GetProperty_7(::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_7_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties()
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTIES_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETNESTEDTYPES_OFFSET))(this);
		}

		::System::Type* GetNestedType(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETNESTEDTYPE_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember(::System::String* name)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBER_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember_1(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBER_1_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember_2(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBER_2_OFFSET))(this, name, type, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetDefaultMembers()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETDEFAULTMEMBERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* FindMembers(::System::Reflection::MemberTypes memberType, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::MemberFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags, ::System::Reflection::MemberFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FINDMEMBERS_OFFSET))(this, memberType, bindingAttr, filter, filterCriteria);
		}

		::System::Boolean get_IsNested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTED_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes get_Attributes()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsNotPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNOTPUBLIC_OFFSET))(this);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISPUBLIC_OFFSET))(this);
		}

		::System::Boolean get_IsNestedPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTEDPUBLIC_OFFSET))(this);
		}

		::System::Boolean get_IsNestedPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTEDPRIVATE_OFFSET))(this);
		}

		::System::Boolean get_IsNestedFamily()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTEDFAMILY_OFFSET))(this);
		}

		::System::Boolean get_IsNestedAssembly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTEDASSEMBLY_OFFSET))(this);
		}

		::System::Boolean get_IsNestedFamANDAssem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTEDFAMANDASSEM_OFFSET))(this);
		}

		::System::Boolean get_IsNestedFamORAssem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISNESTEDFAMORASSEM_OFFSET))(this);
		}

		::System::Boolean get_IsAutoLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISAUTOLAYOUT_OFFSET))(this);
		}

		::System::Boolean get_IsLayoutSequential()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISLAYOUTSEQUENTIAL_OFFSET))(this);
		}

		::System::Boolean get_IsExplicitLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISEXPLICITLAYOUT_OFFSET))(this);
		}

		::System::Boolean get_IsClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISCLASS_OFFSET))(this);
		}

		::System::Boolean get_IsInterface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISINTERFACE_OFFSET))(this);
		}

		::System::Boolean get_IsValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISVALUETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsAbstract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISABSTRACT_OFFSET))(this);
		}

		::System::Boolean get_IsSealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSEALED_OFFSET))(this);
		}

		::System::Boolean get_IsEnum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISENUM_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSPECIALNAME_OFFSET))(this);
		}

		::System::Boolean get_IsImport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISIMPORT_OFFSET))(this);
		}

		::System::Boolean get_IsSerializable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSERIALIZABLE_OFFSET))(this);
		}

		::System::Boolean get_IsAnsiClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISANSICLASS_OFFSET))(this);
		}

		::System::Boolean get_IsUnicodeClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISUNICODECLASS_OFFSET))(this);
		}

		::System::Boolean get_IsAutoClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISAUTOCLASS_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsSzArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSZARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsGenericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISGENERICTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsGenericTypeDefinition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISGENERICTYPEDEFINITION_OFFSET))(this);
		}

		::System::Boolean get_IsConstructedGenericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsGenericParameter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISGENERICPARAMETER_OFFSET))(this);
		}

		::System::Int32 get_GenericParameterPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_GENERICPARAMETERPOSITION_OFFSET))(this);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericParameterConstraints()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET))(this);
		}

		::System::Boolean get_IsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISBYREF_OFFSET))(this);
		}

		::System::Boolean get_IsPointer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISPOINTER_OFFSET))(this);
		}

		::System::Boolean get_IsPrimitive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISPRIMITIVE_OFFSET))(this);
		}

		::System::Boolean get_IsCOMObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISCOMOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsWindowsRuntimeObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISWINDOWSRUNTIMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsExportedToWindowsRuntime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISEXPORTEDTOWINDOWSRUNTIME_OFFSET))(this);
		}

		::System::Boolean get_HasElementType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_HASELEMENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsContextful()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISCONTEXTFUL_OFFSET))(this);
		}

		::System::Boolean get_IsMarshalByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISMARSHALBYREF_OFFSET))(this);
		}

		::System::Boolean get_HasProxyAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_HASPROXYATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean IsValueTypeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISVALUETYPEIMPL_OFFSET))(this);
		}

		::System::Boolean IsWindowsRuntimeObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISWINDOWSRUNTIMEOBJECTIMPL_OFFSET))(this);
		}

		::System::Boolean IsExportedToWindowsRuntimeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISEXPORTEDTOWINDOWSRUNTIMEIMPL_OFFSET))(this);
		}

		::System::Type* MakeGenericType(::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEGENERICTYPE_OFFSET))(this, typeArguments);
		}

		::System::Boolean IsContextfulImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISCONTEXTFULIMPL_OFFSET))(this);
		}

		::System::Boolean IsMarshalByRefImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISMARSHALBYREFIMPL_OFFSET))(this);
		}

		::System::Boolean HasProxyAttributeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_HASPROXYATTRIBUTEIMPL_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* get_GenericTypeArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_GENERICTYPEARGUMENTS_OFFSET))(this);
		}

		::System::Type* GetGenericTypeDefinition()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETGENERICTYPEDEFINITION_OFFSET))(this);
		}

		::System::Type* GetRootElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETROOTELEMENTTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetEnumNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMNAMES_OFFSET))(this);
		}

		::System::Array* GetEnumValues()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMVALUES_OFFSET))(this);
		}

		::System::Array* GetEnumRawConstantValues()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMRAWCONSTANTVALUES_OFFSET))(this);
		}

		::System::Void GetEnumData(::Il2CppArray<::System::String*>*& enumNames, ::System::Array*& enumValues)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::System::Array*&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMDATA_OFFSET))(this, enumNames, enumValues);
		}

		::System::Type* GetEnumUnderlyingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMUNDERLYINGTYPE_OFFSET))(this);
		}

		::System::Boolean IsEnumDefined(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISENUMDEFINED_OFFSET))(this, value);
		}

		::System::String* GetEnumName(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMNAME_OFFSET))(this, value);
		}

		static ::System::Int32 BinarySearch(::System::Array* array, ::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_BINARYSEARCH_OFFSET))(array, value);
		}

		static ::System::Boolean IsIntegerType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISINTEGERTYPE_OFFSET))(t);
		}

		::System::Boolean get_IsSecurityCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSECURITYCRITICAL_OFFSET))(this);
		}

		::System::Boolean get_IsSecuritySafeCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSECURITYSAFECRITICAL_OFFSET))(this);
		}

		::System::Boolean get_IsSecurityTransparent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSECURITYTRANSPARENT_OFFSET))(this);
		}

		::System::Boolean get_NeedsReflectionSecurityCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_NEEDSREFLECTIONSECURITYCHECK_OFFSET))(this);
		}

		::System::Boolean IsSubclassOf(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISSUBCLASSOF_OFFSET))(this, c);
		}

		::System::Boolean IsInstanceOfType(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISINSTANCEOFTYPE_OFFSET))(this, o);
		}

		::System::Boolean IsAssignableFrom(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISASSIGNABLEFROM_OFFSET))(this, c);
		}

		::System::Boolean IsEquivalentTo(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISEQUIVALENTTO_OFFSET))(this, other);
		}

		::System::Boolean ImplementInterface(::System::Type* ifaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_IMPLEMENTINTERFACE_OFFSET))(this, ifaceType);
		}

		::System::String* FormatTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FORMATTYPENAME_OFFSET))(this);
		}

		::System::String* FormatTypeName_1(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FORMATTYPENAME_1_OFFSET))(this, serialization);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_TOSTRING_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* GetTypeArray(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEARRAY_OFFSET))(args);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_EQUALS_OFFSET))(this, o);
		}

		::System::Boolean Equals_1(::System::Type* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_EQUALS_1_OFFSET))(this, o);
		}

		static ::System::Boolean op_Equality(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type* interfaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETINTERFACEMAP_OFFSET))(this, interfaceType);
		}

		::System::Type* GetType_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_3_OFFSET))(this);
		}

		::System::Void System_Runtime_InteropServices__Type_GetTypeInfoCount(::System::UInt32& pcTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFOCOUNT_OFFSET))(this, pcTInfo);
		}

		::System::Void System_Runtime_InteropServices__Type_GetTypeInfo(::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFO_OFFSET))(this, iTInfo, lcid, ppTInfo);
		}

		::System::Void System_Runtime_InteropServices__Type_GetIDsOfNames(::System::Guid& riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETIDSOFNAMES_OFFSET))(this, riid, rgszNames, cNames, lcid, rgDispId);
		}

		::System::Void System_Runtime_InteropServices__Type_Invoke(::System::UInt32 dispIdMember, ::System::Guid& riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_INVOKE_OFFSET))(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
		}

		::System::Boolean get_IsSZArray_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSZARRAY_1_OFFSET))(this);
		}

		static ::System::Type* internal_from_name(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INTERNAL_FROM_NAME_OFFSET))(name, throwOnError, ignoreCase);
		}

		static ::System::Type* GetType_4(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_4_OFFSET))(typeName);
		}

		static ::System::Type* GetType_5(::System::String* typeName, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_5_OFFSET))(typeName, throwOnError);
		}

		static ::System::Type* GetType_6(::System::String* typeName, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_6_OFFSET))(typeName, throwOnError, ignoreCase);
		}

		static ::System::Type* ReflectionOnlyGetType(::System::String* typeName, ::System::Boolean throwIfNotFound, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_REFLECTIONONLYGETTYPE_OFFSET))(typeName, throwIfNotFound, ignoreCase);
		}

		::System::Type* InternalResolve()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INTERNALRESOLVE_OFFSET))(this);
		}

		::System::Type* RuntimeResolve()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_RUNTIMERESOLVE_OFFSET))(this);
		}

		::System::Boolean get_IsUserType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISUSERTYPE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethod_6(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_6_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* GetConstructor_3(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_3_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* GetField_1(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETFIELD_1_OFFSET))(this, fromNoninstanciated);
		}

		static ::System::Type* GetTypeFromHandle(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Type*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMHANDLE_OFFSET))(handle);
		}

		static ::System::Type* internal_from_handle(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INTERNAL_FROM_HANDLE_OFFSET))(handle);
		}
	};
}
