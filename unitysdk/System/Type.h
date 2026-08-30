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

#define SYSTEM_TYPE_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1BC77AD0)
#define SYSTEM_TYPE_CREATEBINDER_OFFSET UNITYSDK_OFFSET(0x1BC70F30)
#define SYSTEM_TYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BC78FD0)
#define SYSTEM_TYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC78F00)
#define SYSTEM_TYPE_FINDINTERFACES_OFFSET UNITYSDK_OFFSET(0x1BC721C0)
#define SYSTEM_TYPE_FINDMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BC732D0)
#define SYSTEM_TYPE_FORMATTYPENAME_1_OFFSET UNITYSDK_OFFSET(0x1BC78C80)
#define SYSTEM_TYPE_FORMATTYPENAME_OFFSET UNITYSDK_OFFSET(0x1BC78BF0)
#define SYSTEM_TYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x1BC712B0)
#define SYSTEM_TYPE_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x1BC715F0)
#define SYSTEM_TYPE_GETCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC71480)
#define SYSTEM_TYPE_GETCONSTRUCTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC715C0)
#define SYSTEM_TYPE_GETCONSTRUCTOR_3_OFFSET UNITYSDK_OFFSET(0x1BC79AF0)
#define SYSTEM_TYPE_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BC71310)
#define SYSTEM_TYPE_GETDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BC73280)
#define SYSTEM_TYPE_GETENUMDATA_OFFSET UNITYSDK_OFFSET(0x1BC766E0)
#define SYSTEM_TYPE_GETENUMNAMES_OFFSET UNITYSDK_OFFSET(0x1BC765E0)
#define SYSTEM_TYPE_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x1BC77DA0)
#define SYSTEM_TYPE_GETENUMRAWCONSTANTVALUES_OFFSET UNITYSDK_OFFSET(0x1BC76EC0)
#define SYSTEM_TYPE_GETENUMUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BC76EF0)
#define SYSTEM_TYPE_GETENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1BC76DB0)
#define SYSTEM_TYPE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1BC724B0)
#define SYSTEM_TYPE_GETEVENT_OFFSET UNITYSDK_OFFSET(0x1BC72420)
#define SYSTEM_TYPE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1BC720A0)
#define SYSTEM_TYPE_GETFIELD_1_OFFSET UNITYSDK_OFFSET(0x1BC79B40)
#define SYSTEM_TYPE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1BC72010)
#define SYSTEM_TYPE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BC763A0)
#define SYSTEM_TYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1BC75AD0)
#define SYSTEM_TYPE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BC76580)
#define SYSTEM_TYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC790E0)
#define SYSTEM_TYPE_GETINTERFACEMAP_OFFSET UNITYSDK_OFFSET(0x1BC79200)
#define SYSTEM_TYPE_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x1BC72130)
#define SYSTEM_TYPE_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BC731F0)
#define SYSTEM_TYPE_GETMEMBER_1_OFFSET UNITYSDK_OFFSET(0x1BC730F0)
#define SYSTEM_TYPE_GETMEMBER_2_OFFSET UNITYSDK_OFFSET(0x1BC73190)
#define SYSTEM_TYPE_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x1BC73060)
#define SYSTEM_TYPE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x1BC71F80)
#define SYSTEM_TYPE_GETMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1BC718F0)
#define SYSTEM_TYPE_GETMETHOD_2_OFFSET UNITYSDK_OFFSET(0x1BC71AB0)
#define SYSTEM_TYPE_GETMETHOD_3_OFFSET UNITYSDK_OFFSET(0x1BC71C60)
#define SYSTEM_TYPE_GETMETHOD_4_OFFSET UNITYSDK_OFFSET(0x1BC71DC0)
#define SYSTEM_TYPE_GETMETHOD_5_OFFSET UNITYSDK_OFFSET(0x1BC71EA0)
#define SYSTEM_TYPE_GETMETHOD_6_OFFSET UNITYSDK_OFFSET(0x1BC79AA0)
#define SYSTEM_TYPE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1BC71730)
#define SYSTEM_TYPE_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1BC72F40)
#define SYSTEM_TYPE_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BC72FD0)
#define SYSTEM_TYPE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BC72EB0)
#define SYSTEM_TYPE_GETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1BC72680)
#define SYSTEM_TYPE_GETPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x1BC727D0)
#define SYSTEM_TYPE_GETPROPERTY_3_OFFSET UNITYSDK_OFFSET(0x1BC728C0)
#define SYSTEM_TYPE_GETPROPERTY_4_OFFSET UNITYSDK_OFFSET(0x1BC72A00)
#define SYSTEM_TYPE_GETPROPERTY_5_OFFSET UNITYSDK_OFFSET(0x1BC72B40)
#define SYSTEM_TYPE_GETPROPERTY_6_OFFSET UNITYSDK_OFFSET(0x1BC72C80)
#define SYSTEM_TYPE_GETPROPERTY_7_OFFSET UNITYSDK_OFFSET(0x1BC72DC0)
#define SYSTEM_TYPE_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BC72540)
#define SYSTEM_TYPE_GETROOTELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BC759B0)
#define SYSTEM_TYPE_GETTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x1BC78D90)
#define SYSTEM_TYPE_GETTYPECODEIMPL_OFFSET UNITYSDK_OFFSET(0x1BC70CD0)
#define SYSTEM_TYPE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1BC70C30)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_1_OFFSET UNITYSDK_OFFSET(0x1BC70B60)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_2_OFFSET UNITYSDK_OFFSET(0x1BC70BA0)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_3_OFFSET UNITYSDK_OFFSET(0x1BC70BE0)
#define SYSTEM_TYPE_GETTYPEFROMCLSID_OFFSET UNITYSDK_OFFSET(0x1BC70B20)
#define SYSTEM_TYPE_GETTYPEFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x1BC496E0)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_1_OFFSET UNITYSDK_OFFSET(0x1BC70A50)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_2_OFFSET UNITYSDK_OFFSET(0x1BC70A90)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_3_OFFSET UNITYSDK_OFFSET(0x1BC70AD0)
#define SYSTEM_TYPE_GETTYPEFROMPROGID_OFFSET UNITYSDK_OFFSET(0x1BC70A10)
#define SYSTEM_TYPE_GETTYPEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC71170)
#define SYSTEM_TYPE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x1BC711F0)
#define SYSTEM_TYPE_GETTYPE_1_OFFSET UNITYSDK_OFFSET(0x1BC70800)
#define SYSTEM_TYPE_GETTYPE_2_OFFSET UNITYSDK_OFFSET(0x1BC70840)
#define SYSTEM_TYPE_GETTYPE_3_OFFSET UNITYSDK_OFFSET(0x1BC79260)
#define SYSTEM_TYPE_GETTYPE_4_OFFSET UNITYSDK_OFFSET(0x1BC79410)
#define SYSTEM_TYPE_GETTYPE_5_OFFSET UNITYSDK_OFFSET(0x1BC79630)
#define SYSTEM_TYPE_GETTYPE_6_OFFSET UNITYSDK_OFFSET(0x1BC79520)
#define SYSTEM_TYPE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1BC707C0)
#define SYSTEM_TYPE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BC73FA0)
#define SYSTEM_TYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BC75640)
#define SYSTEM_TYPE_GET_DECLARINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1BC707A0)
#define SYSTEM_TYPE_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BC70790)
#define SYSTEM_TYPE_GET_DEFAULTBINDER_OFFSET UNITYSDK_OFFSET(0x1BC70EE0)
#define SYSTEM_TYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BC74020)
#define SYSTEM_TYPE_GET_GENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x1BC755E0)
#define SYSTEM_TYPE_GET_GENERICTYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BC76400)
#define SYSTEM_TYPE_GET_HASELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BC74590)
#define SYSTEM_TYPE_GET_HASPROXYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BC75FE0)
#define SYSTEM_TYPE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1BC74F00)
#define SYSTEM_TYPE_GET_ISANSICLASS_OFFSET UNITYSDK_OFFSET(0x1BC75320)
#define SYSTEM_TYPE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1BC754D0)
#define SYSTEM_TYPE_GET_ISAUTOCLASS_OFFSET UNITYSDK_OFFSET(0x1BC75440)
#define SYSTEM_TYPE_GET_ISAUTOLAYOUT_OFFSET UNITYSDK_OFFSET(0x1BC74A80)
#define SYSTEM_TYPE_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x1BC75BE0)
#define SYSTEM_TYPE_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1BC74C20)
#define SYSTEM_TYPE_GET_ISCOMOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC75D60)
#define SYSTEM_TYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1BC75580)
#define SYSTEM_TYPE_GET_ISCONTEXTFUL_OFFSET UNITYSDK_OFFSET(0x1BC75EE0)
#define SYSTEM_TYPE_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x1BC75000)
#define SYSTEM_TYPE_GET_ISEXPLICITLAYOUT_OFFSET UNITYSDK_OFFSET(0x1BC74B90)
#define SYSTEM_TYPE_GET_ISEXPORTEDTOWINDOWSRUNTIME_OFFSET UNITYSDK_OFFSET(0x1BC75E60)
#define SYSTEM_TYPE_GET_ISGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BC755D0)
#define SYSTEM_TYPE_GET_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BC75570)
#define SYSTEM_TYPE_GET_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1BC75560)
#define SYSTEM_TYPE_GET_ISIMPORT_OFFSET UNITYSDK_OFFSET(0x1BC75130)
#define SYSTEM_TYPE_GET_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x1BC74DA0)
#define SYSTEM_TYPE_GET_ISLAYOUTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1BC74B00)
#define SYSTEM_TYPE_GET_ISMARSHALBYREF_OFFSET UNITYSDK_OFFSET(0x1BC75F60)
#define SYSTEM_TYPE_GET_ISNESTEDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1BC748D0)
#define SYSTEM_TYPE_GET_ISNESTEDFAMANDASSEM_OFFSET UNITYSDK_OFFSET(0x1BC74960)
#define SYSTEM_TYPE_GET_ISNESTEDFAMILY_OFFSET UNITYSDK_OFFSET(0x1BC74840)
#define SYSTEM_TYPE_GET_ISNESTEDFAMORASSEM_OFFSET UNITYSDK_OFFSET(0x1BC749F0)
#define SYSTEM_TYPE_GET_ISNESTEDPRIVATE_OFFSET UNITYSDK_OFFSET(0x1BC747B0)
#define SYSTEM_TYPE_GET_ISNESTEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x1BC74610)
#define SYSTEM_TYPE_GET_ISNESTED_OFFSET UNITYSDK_OFFSET(0x1BC73F20)
#define SYSTEM_TYPE_GET_ISNOTPUBLIC_OFFSET UNITYSDK_OFFSET(0x1BC74730)
#define SYSTEM_TYPE_GET_ISPOINTER_OFFSET UNITYSDK_OFFSET(0x1BC75C60)
#define SYSTEM_TYPE_GET_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1BC75CE0)
#define SYSTEM_TYPE_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1BC746A0)
#define SYSTEM_TYPE_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1BC74F80)
#define SYSTEM_TYPE_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x1BC78070)
#define SYSTEM_TYPE_GET_ISSECURITYSAFECRITICAL_OFFSET UNITYSDK_OFFSET(0x1BC780C0)
#define SYSTEM_TYPE_GET_ISSECURITYTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1BC78110)
#define SYSTEM_TYPE_GET_ISSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1BC751B0)
#define SYSTEM_TYPE_GET_ISSPECIALNAME_OFFSET UNITYSDK_OFFSET(0x1BC750B0)
#define SYSTEM_TYPE_GET_ISSZARRAY_1_OFFSET UNITYSDK_OFFSET(0x1BC793B0)
#define SYSTEM_TYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x1BC75550)
#define SYSTEM_TYPE_GET_ISUNICODECLASS_OFFSET UNITYSDK_OFFSET(0x1BC753B0)
#define SYSTEM_TYPE_GET_ISUSERTYPE_OFFSET UNITYSDK_OFFSET(0x1BC79A90)
#define SYSTEM_TYPE_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BC74D20)
#define SYSTEM_TYPE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BC74070)
#define SYSTEM_TYPE_GET_ISWINDOWSRUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC75DE0)
#define SYSTEM_TYPE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1BC70780)
#define SYSTEM_TYPE_GET_NEEDSREFLECTIONSECURITYCHECK_OFFSET UNITYSDK_OFFSET(0x1BC78160)
#define SYSTEM_TYPE_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BC707B0)
#define SYSTEM_TYPE_GET_STRUCTLAYOUTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BC708D0)
#define SYSTEM_TYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x1BC71120)
#define SYSTEM_TYPE_GET_TYPEINITIALIZER_OFFSET UNITYSDK_OFFSET(0x1BC71680)
#define SYSTEM_TYPE_HASPROXYATTRIBUTEIMPL_OFFSET UNITYSDK_OFFSET(0x1BC76390)
#define SYSTEM_TYPE_IMPLEMENTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1BC78A50)
#define SYSTEM_TYPE_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x1BC799C0)
#define SYSTEM_TYPE_INTERNAL_FROM_HANDLE_OFFSET UNITYSDK_OFFSET(0x1BC79B90)
#define SYSTEM_TYPE_INTERNAL_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x1BC79400)
#define SYSTEM_TYPE_INVOKEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x1BC71050)
#define SYSTEM_TYPE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BC70F70)
#define SYSTEM_TYPE_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x1BC786D0)
#define SYSTEM_TYPE_ISCONTEXTFULIMPL_OFFSET UNITYSDK_OFFSET(0x1BC76210)
#define SYSTEM_TYPE_ISENUMDEFINED_OFFSET UNITYSDK_OFFSET(0x1BC77130)
#define SYSTEM_TYPE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1BC78BE0)
#define SYSTEM_TYPE_ISEXPORTEDTOWINDOWSRUNTIMEIMPL_OFFSET UNITYSDK_OFFSET(0x1BC76160)
#define SYSTEM_TYPE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x1BC78620)
#define SYSTEM_TYPE_ISINTEGERTYPE_OFFSET UNITYSDK_OFFSET(0x1BC77900)
#define SYSTEM_TYPE_ISMARSHALBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x1BC762D0)
#define SYSTEM_TYPE_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x1BC78550)
#define SYSTEM_TYPE_ISVALUETYPEIMPL_OFFSET UNITYSDK_OFFSET(0x1BC76060)
#define SYSTEM_TYPE_ISWINDOWSRUNTIMEOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x1BC76110)
#define SYSTEM_TYPE_MAKEARRAYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1BC709C0)
#define SYSTEM_TYPE_MAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1BC70970)
#define SYSTEM_TYPE_MAKEBYREFTYPE_OFFSET UNITYSDK_OFFSET(0x1BC70920)
#define SYSTEM_TYPE_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1BC761B0)
#define SYSTEM_TYPE_MAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x1BC70880)
#define SYSTEM_TYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BC70CC0)
#define SYSTEM_TYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BC49710)
#define SYSTEM_TYPE_REFLECTIONONLYGETTYPE_OFFSET UNITYSDK_OFFSET(0x1BC796F0)
#define SYSTEM_TYPE_RUNTIMERESOLVE_OFFSET UNITYSDK_OFFSET(0x1BC79A40)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETIDSOFNAMES_OFFSET UNITYSDK_OFFSET(0x1BC79310)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC79270)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1BC792C0)
#define SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC79360)
#define SYSTEM_TYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BC78CD0)
#define SYSTEM_TYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC79BB0)
#define SYSTEM_TYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC70770)

namespace System
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 351;

	class Type : public ::System::Reflection::MemberInfo
	{
	public:
		static ::System::Reflection::MemberFilter** StaticGet_FilterName()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x520);
		}
		static ::System::Reflection::Binder** StaticGet_defaultBinder()
		{
			return (::System::Reflection::Binder**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x528);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x530);
		}
		static ::System::Reflection::MemberFilter** StaticGet_FilterNameIgnoreCase()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x538);
		}
		static ::System::Reflection::MemberFilter** StaticGet_FilterAttribute()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		static ::System::Object** StaticGet_Missing()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x548);
		}
		static ::System::Char* StaticGet_Delimiter()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x3F0);
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

		static ::System::Type* GetType(::System::String* a1, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* a2, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* a3)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetType_1(::System::String* a1, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* a2, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* a3, ::System::Boolean a4)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Type* GetType_2(::System::String* a1, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* a2, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_2_OFFSET))(a1, a2, a3, a4, a5);
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

		::System::Type* MakeArrayType_1(::System::Int32 a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEARRAYTYPE_1_OFFSET))(this, a1);
		}

		static ::System::Type* GetTypeFromProgID(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_OFFSET))(a1);
		}

		static ::System::Type* GetTypeFromProgID_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_1_OFFSET))(a1, a2);
		}

		static ::System::Type* GetTypeFromProgID_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_2_OFFSET))(a1, a2);
		}

		static ::System::Type* GetTypeFromProgID_3(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMPROGID_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetTypeFromCLSID(::System::Guid a1)
		{
			return ((::System::Type*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_OFFSET))(a1);
		}

		static ::System::Type* GetTypeFromCLSID_1(::System::Guid a1, ::System::Boolean a2)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_1_OFFSET))(a1, a2);
		}

		static ::System::Type* GetTypeFromCLSID_2(::System::Guid a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_2_OFFSET))(a1, a2);
		}

		static ::System::Type* GetTypeFromCLSID_3(::System::Guid a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMCLSID_3_OFFSET))(a1, a2, a3);
		}

		static ::System::TypeCode GetTypeCode(::System::Type* a1)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPECODE_OFFSET))(a1);
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

		::System::Object* InvokeMember(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Object* a4, ::Il2CppArray<::System::Object*>* a5, ::System::Globalization::CultureInfo* a6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INVOKEMEMBER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Object* InvokeMember_1(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Object* a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INVOKEMEMBER_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::RuntimeTypeHandle get_TypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_TYPEHANDLE_OFFSET))(this);
		}

		::System::RuntimeTypeHandle GetTypeHandleInternal()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEHANDLEINTERNAL_OFFSET))(this);
		}

		static ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* a1)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEHANDLE_OFFSET))(a1);
		}

		::System::Int32 GetArrayRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETARRAYRANK_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags a1, ::System::Reflection::Binder* a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4, ::Il2CppArray<::System::Reflection::ParameterModifier>* a5)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Reflection::ConstructorInfo* GetConstructor_1(::System::Reflection::BindingFlags a1, ::System::Reflection::Binder* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Reflection::ParameterModifier>* a4)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::ConstructorInfo* GetConstructor_2(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors()
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTORS_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_TypeInitializer()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_TYPEINITIALIZER_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethod(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Reflection::CallingConventions a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Reflection::MethodInfo* GetMethod_1(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Type*>* a4, ::Il2CppArray<::System::Reflection::ParameterModifier>* a5)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Reflection::MethodInfo* GetMethod_2(::System::String* a1, ::Il2CppArray<::System::Type*>* a2, ::Il2CppArray<::System::Reflection::ParameterModifier>* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::MethodInfo* GetMethod_3(::System::String* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_3_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MethodInfo* GetMethod_4(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_4_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MethodInfo* GetMethod_5(::System::String* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_5_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods()
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHODS_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* a1)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETFIELD_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETFIELDS_OFFSET))(this);
		}

		::System::Type* GetInterface(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETINTERFACE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* FindInterfaces(::System::Reflection::TypeFilter* a1, ::System::Object* a2)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::TypeFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FINDINTERFACES_OFFSET))(this, a1, a2);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* a1)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETEVENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents()
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETEVENTS_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* GetProperty(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Type* a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Reflection::PropertyInfo* GetProperty_1(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Reflection::ParameterModifier>* a4)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::PropertyInfo* GetProperty_2(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_2_OFFSET))(this, a1, a2);
		}

		::System::Reflection::PropertyInfo* GetProperty_3(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::PropertyInfo* GetProperty_4(::System::String* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_4_OFFSET))(this, a1, a2);
		}

		::System::Reflection::PropertyInfo* GetProperty_5(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_5_OFFSET))(this, a1, a2);
		}

		::System::Reflection::PropertyInfo* GetProperty_6(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Type* a3)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::PropertyInfo* GetProperty_7(::System::String* a1)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTY_7_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties()
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETPROPERTIES_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETNESTEDTYPES_OFFSET))(this);
		}

		::System::Type* GetNestedType(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETNESTEDTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBER_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember_1(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBER_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember_2(::System::String* a1, ::System::Reflection::MemberTypes a2, ::System::Reflection::BindingFlags a3)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBER_2_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMEMBERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetDefaultMembers()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETDEFAULTMEMBERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* FindMembers(::System::Reflection::MemberTypes a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::MemberFilter* a3, ::System::Object* a4)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags, ::System::Reflection::MemberFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FINDMEMBERS_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Type* MakeGenericType(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_MAKEGENERICTYPE_OFFSET))(this, a1);
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

		::System::Void GetEnumData(::Il2CppArray<::System::String*>*& a1, ::System::Array*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::System::Array*&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMDATA_OFFSET))(this, a1, a2);
		}

		::System::Type* GetEnumUnderlyingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMUNDERLYINGTYPE_OFFSET))(this);
		}

		::System::Boolean IsEnumDefined(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISENUMDEFINED_OFFSET))(this, a1);
		}

		::System::String* GetEnumName(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETENUMNAME_OFFSET))(this, a1);
		}

		static ::System::Int32 BinarySearch(::System::Array* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_BINARYSEARCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsIntegerType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISINTEGERTYPE_OFFSET))(a1);
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

		::System::Boolean IsSubclassOf(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISSUBCLASSOF_OFFSET))(this, a1);
		}

		::System::Boolean IsInstanceOfType(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISINSTANCEOFTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsAssignableFrom(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISASSIGNABLEFROM_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

		::System::Boolean ImplementInterface(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_IMPLEMENTINTERFACE_OFFSET))(this, a1);
		}

		::System::String* FormatTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FORMATTYPENAME_OFFSET))(this);
		}

		::System::String* FormatTypeName_1(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_FORMATTYPENAME_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_TOSTRING_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* GetTypeArray(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEARRAY_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type* a1)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETINTERFACEMAP_OFFSET))(this, a1);
		}

		::System::Type* GetType_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_3_OFFSET))(this);
		}

		::System::Void System_Runtime_InteropServices__Type_GetTypeInfoCount(::System::UInt32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFOCOUNT_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_InteropServices__Type_GetTypeInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETTYPEINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void System_Runtime_InteropServices__Type_GetIDsOfNames(::System::Guid& a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::IntPtr a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_GETIDSOFNAMES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void System_Runtime_InteropServices__Type_Invoke(::System::UInt32 a1, ::System::Guid& a2, ::System::UInt32 a3, ::System::Int16 a4, ::System::IntPtr a5, ::System::IntPtr a6, ::System::IntPtr a7, ::System::IntPtr a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean get_IsSZArray_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GET_ISSZARRAY_1_OFFSET))(this);
		}

		static ::System::Type* internal_from_name(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INTERNAL_FROM_NAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetType_4(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_4_OFFSET))(a1);
		}

		static ::System::Type* GetType_5(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_5_OFFSET))(a1, a2);
		}

		static ::System::Type* GetType_6(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* ReflectionOnlyGetType(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_REFLECTIONONLYGETTYPE_OFFSET))(a1, a2, a3);
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

		::System::Reflection::MethodInfo* GetMethod_6(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETMETHOD_6_OFFSET))(this, a1);
		}

		::System::Reflection::ConstructorInfo* GetConstructor_3(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETCONSTRUCTOR_3_OFFSET))(this, a1);
		}

		::System::Reflection::FieldInfo* GetField_1(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETFIELD_1_OFFSET))(this, a1);
		}

		static ::System::Type* GetTypeFromHandle(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Type*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_GETTYPEFROMHANDLE_OFFSET))(a1);
		}

		static ::System::Type* internal_from_handle(::System::IntPtr a1)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_INTERNAL_FROM_HANDLE_OFFSET))(a1);
		}
	};
}
