#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Reflection/TypeInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/RuntimeType_ListBuilder_1.h"
#include "unitysdk/System/RuntimeType_MemberListType.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/TypeNameKind.h"

namespace System { class Array; }
namespace System { class MonoTypeInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class MonoCMethod; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeConstructorInfo; }
namespace System::Reflection { class RuntimeEventInfo; }
namespace System::Reflection { class RuntimeFieldInfo; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Reflection { class RuntimePropertyInfo; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPE_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x19BA9930)
#define SYSTEM_RUNTIMETYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x19BA7880)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCECHECKTHIS_OFFSET UNITYSDK_OFFSET(0x19BA8260)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEDEFAULTCTOR_OFFSET UNITYSDK_OFFSET(0x19BA8FA0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEFORANOTHERGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x19BAAA30)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEIMPL_OFFSET UNITYSDK_OFFSET(0x19BA8710)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19BA9890)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEMONO_OFFSET UNITYSDK_OFFSET(0x19BA94E0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCESLOW_OFFSET UNITYSDK_OFFSET(0x19BA9040)
#define SYSTEM_RUNTIMETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BA7870)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYBASE_OFFSET UNITYSDK_OFFSET(0x19B9E2D0)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYCONSTRUCTORINFO_OFFSET UNITYSDK_OFFSET(0x19B9EF50)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODBASE_OFFSET UNITYSDK_OFFSET(0x19B9E9A0)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODINFO_OFFSET UNITYSDK_OFFSET(0x19B9E940)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYPREFIXLOOKUP_OFFSET UNITYSDK_OFFSET(0x19B9E180)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYTYPE_OFFSET UNITYSDK_OFFSET(0x19B9E670)
#define SYSTEM_RUNTIMETYPE_FILTERHELPER_1_OFFSET UNITYSDK_OFFSET(0x19B9E100)
#define SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET UNITYSDK_OFFSET(0x19B9E040)
#define SYSTEM_RUNTIMETYPE_FORMATTYPENAME_OFFSET UNITYSDK_OFFSET(0x19BA7C90)
#define SYSTEM_RUNTIMETYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x19BA4750)
#define SYSTEM_RUNTIMETYPE_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x19BA4180)
#define SYSTEM_RUNTIMETYPE_GETBASETYPE_OFFSET UNITYSDK_OFFSET(0x19B9F0D0)
#define SYSTEM_RUNTIMETYPE_GETCACHEDNAME_OFFSET UNITYSDK_OFFSET(0x19BA7EB0)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19B9FA80)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x19BA21D0)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19B9FE10)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_NATIVE_OFFSET UNITYSDK_OFFSET(0x19BAAB70)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x19BA1B30)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x19BA92D0)
#define SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x19BA9250)
#define SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDMETHOD_OFFSET UNITYSDK_OFFSET(0x19BA9240)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x19BA7C10)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x19BA7950)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19BA7900)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x19BA9070)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x19BA5D70)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x19BA5C80)
#define SYSTEM_RUNTIMETYPE_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x19BA47F0)
#define SYSTEM_RUNTIMETYPE_GETENUMNAMES_OFFSET UNITYSDK_OFFSET(0x19BA48D0)
#define SYSTEM_RUNTIMETYPE_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x19BA5190)
#define SYSTEM_RUNTIMETYPE_GETENUMUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x19BA4B10)
#define SYSTEM_RUNTIMETYPE_GETENUMVALUES_OFFSET UNITYSDK_OFFSET(0x19BA49A0)
#define SYSTEM_RUNTIMETYPE_GETEVENTCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19BA07D0)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19BA09E0)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_NATIVE_OFFSET UNITYSDK_OFFSET(0x19BAB090)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x19BA1BE0)
#define SYSTEM_RUNTIMETYPE_GETEVENT_OFFSET UNITYSDK_OFFSET(0x19BA2750)
#define SYSTEM_RUNTIMETYPE_GETFIELDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19BA0DF0)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19BA1000)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_NATIVE_OFFSET UNITYSDK_OFFSET(0x19BAB0A0)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x19BA1C30)
#define SYSTEM_RUNTIMETYPE_GETFIELD_1_OFFSET UNITYSDK_OFFSET(0x19BA9340)
#define SYSTEM_RUNTIMETYPE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x19BA28B0)
#define SYSTEM_RUNTIMETYPE_GETFULLNAME_OFFSET UNITYSDK_OFFSET(0x19BAB070)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x19BA53B0)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x19BA5360)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19BA53C0)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19BA45F0)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x19BA3FF0)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x19BA5A10)
#define SYSTEM_RUNTIMETYPE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x19BA5AB0)
#define SYSTEM_RUNTIMETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BAB160)
#define SYSTEM_RUNTIMETYPE_GETINTERFACEMAPDATA_OFFSET UNITYSDK_OFFSET(0x19BAAE00)
#define SYSTEM_RUNTIMETYPE_GETINTERFACEMAP_OFFSET UNITYSDK_OFFSET(0x19BAAB80)
#define SYSTEM_RUNTIMETYPE_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x19BA3380)
#define SYSTEM_RUNTIMETYPE_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x19BA2F30)
#define SYSTEM_RUNTIMETYPE_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x19BA1CD0)
#define SYSTEM_RUNTIMETYPE_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA3610)
#define SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19B9F370)
#define SYSTEM_RUNTIMETYPE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x19BA1F10)
#define SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_NATIVE_OFFSET UNITYSDK_OFFSET(0x19BAAB50)
#define SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_OFFSET UNITYSDK_OFFSET(0x19B9F660)
#define SYSTEM_RUNTIMETYPE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x19BA1AD0)
#define SYSTEM_RUNTIMETYPE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x19BA9260)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPECANDIDATES_OFFSET UNITYSDK_OFFSET(0x19BA1410)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19BA1660)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_NATIVE_OFFSET UNITYSDK_OFFSET(0x19BAB0B0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x19BA1C80)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x19BA33A0)
#define SYSTEM_RUNTIMETYPE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19BA7890)
#define SYSTEM_RUNTIMETYPE_GETPACKING_OFFSET UNITYSDK_OFFSET(0x19BAAEE0)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_NATIVE_OFFSET UNITYSDK_OFFSET(0x19BAAB60)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_OFFSET UNITYSDK_OFFSET(0x19BA03B0)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19BA1B90)
#define SYSTEM_RUNTIMETYPE_GETPROPERTYCANDIDATES_OFFSET UNITYSDK_OFFSET(0x19BA0080)
#define SYSTEM_RUNTIMETYPE_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x19BA2450)
#define SYSTEM_RUNTIMETYPE_GETRUNTIMEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x19BA3A60)
#define SYSTEM_RUNTIMETYPE_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x19BA39F0)
#define SYSTEM_RUNTIMETYPE_GETSERIALIZATIONCTOR_OFFSET UNITYSDK_OFFSET(0x19B95EB0)
#define SYSTEM_RUNTIMETYPE_GETTYPECODEIMPLINTERNAL_OFFSET UNITYSDK_OFFSET(0x19BAB010)
#define SYSTEM_RUNTIMETYPE_GETTYPECODEIMPL_OFFSET UNITYSDK_OFFSET(0x19BAAFE0)
#define SYSTEM_RUNTIMETYPE_GETTYPEFROMCLSIDIMPL_OFFSET UNITYSDK_OFFSET(0x19BAAF90)
#define SYSTEM_RUNTIMETYPE_GETTYPEFROMPROGIDIMPL_OFFSET UNITYSDK_OFFSET(0x19BAB020)
#define SYSTEM_RUNTIMETYPE_GETTYPEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19BA3B00)
#define SYSTEM_RUNTIMETYPE_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x19BAB0C0)
#define SYSTEM_RUNTIMETYPE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x19BA3A30)
#define SYSTEM_RUNTIMETYPE_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x19B992C0)
#define SYSTEM_RUNTIMETYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19BA8420)
#define SYSTEM_RUNTIMETYPE_GET_DECLARINGMETHOD_OFFSET UNITYSDK_OFFSET(0x19BAB080)
#define SYSTEM_RUNTIMETYPE_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x19BA8190)
#define SYSTEM_RUNTIMETYPE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x19B96050)
#define SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19BA40C0)
#define SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x19BA5900)
#define SYSTEM_RUNTIMETYPE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x19BAAE10)
#define SYSTEM_RUNTIMETYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x19BA5C20)
#define SYSTEM_RUNTIMETYPE_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x19BA44F0)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x19BA4090)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x19BA5880)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x19BA5B50)
#define SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_1_OFFSET UNITYSDK_OFFSET(0x19BAB170)
#define SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x19BA4610)
#define SYSTEM_RUNTIMETYPE_GET_ISUSERTYPE_OFFSET UNITYSDK_OFFSET(0x19BAB2E0)
#define SYSTEM_RUNTIMETYPE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x19BA7F20)
#define SYSTEM_RUNTIMETYPE_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x19BA81A0)
#define SYSTEM_RUNTIMETYPE_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x19BA39D0)
#define SYSTEM_RUNTIMETYPE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x19BAB0D0)
#define SYSTEM_RUNTIMETYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19BA3390)
#define SYSTEM_RUNTIMETYPE_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x19BA8180)
#define SYSTEM_RUNTIMETYPE_GET_STRUCTLAYOUTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19BAAA10)
#define SYSTEM_RUNTIMETYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x19BA3AC0)
#define SYSTEM_RUNTIMETYPE_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x19BA4170)
#define SYSTEM_RUNTIMETYPE_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x19BA4530)
#define SYSTEM_RUNTIMETYPE_HASPROXYATTRIBUTEIMPL_OFFSET UNITYSDK_OFFSET(0x19BA43B0)
#define SYSTEM_RUNTIMETYPE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA5E20)
#define SYSTEM_RUNTIMETYPE_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x19BA46D0)
#define SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BA3D90)
#define SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x19BA3CF0)
#define SYSTEM_RUNTIMETYPE_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x19BA42B0)
#define SYSTEM_RUNTIMETYPE_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x19BA4390)
#define SYSTEM_RUNTIMETYPE_ISCONTEXTFULIMPL_OFFSET UNITYSDK_OFFSET(0x19BA41E0)
#define SYSTEM_RUNTIMETYPE_ISCONVERTIBLETOPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x19BA9E20)
#define SYSTEM_RUNTIMETYPE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x19BA7AB0)
#define SYSTEM_RUNTIMETYPE_ISENUMDEFINED_OFFSET UNITYSDK_OFFSET(0x19BA4BF0)
#define SYSTEM_RUNTIMETYPE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x19BA3F50)
#define SYSTEM_RUNTIMETYPE_ISGENERICCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x19BA8F90)
#define SYSTEM_RUNTIMETYPE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x19BA3B20)
#define SYSTEM_RUNTIMETYPE_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x19BA4350)
#define SYSTEM_RUNTIMETYPE_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x19BA42D0)
#define SYSTEM_RUNTIMETYPE_ISSPECIALSERIALIZABLETYPE_OFFSET UNITYSDK_OFFSET(0x19B9F000)
#define SYSTEM_RUNTIMETYPE_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x19BA3BA0)
#define SYSTEM_RUNTIMETYPE_ISVALUETYPEIMPL_OFFSET UNITYSDK_OFFSET(0x19BA4450)
#define SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_1_OFFSET UNITYSDK_OFFSET(0x19BAA800)
#define SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x19BAA7B0)
#define SYSTEM_RUNTIMETYPE_MAKEBYREFTYPE_OFFSET UNITYSDK_OFFSET(0x19BAA8D0)
#define SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_1_OFFSET UNITYSDK_OFFSET(0x19BA58B0)
#define SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x19BA5410)
#define SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_1_OFFSET UNITYSDK_OFFSET(0x19BAA9D0)
#define SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x19BAA9A0)
#define SYSTEM_RUNTIMETYPE_MAKE_ARRAY_TYPE_OFFSET UNITYSDK_OFFSET(0x19BAA750)
#define SYSTEM_RUNTIMETYPE_MAKE_BYREF_TYPE_OFFSET UNITYSDK_OFFSET(0x19BAA8B0)
#define SYSTEM_RUNTIMETYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19B97EF0)
#define SYSTEM_RUNTIMETYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19B9F360)
#define SYSTEM_RUNTIMETYPE_SANITYCHECKGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19B9DDD0)
#define SYSTEM_RUNTIMETYPE_SPLITNAME_OFFSET UNITYSDK_OFFSET(0x19B9DFA0)
#define SYSTEM_RUNTIMETYPE_THROWIFTYPENEVERVALIDGENERICARGUMENT_OFFSET UNITYSDK_OFFSET(0x19B9DC10)
#define SYSTEM_RUNTIMETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B9DDC0)
#define SYSTEM_RUNTIMETYPE_TRYCONVERTTOTYPE_OFFSET UNITYSDK_OFFSET(0x19BA9A50)
#define SYSTEM_RUNTIMETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BAB2F0)
#define SYSTEM_RUNTIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9EFB0)

namespace System
{
	inline static constexpr unsigned int RuntimeType_TypeDefinitionIndex = 321;

	class RuntimeType : public ::System::Reflection::TypeInfo
	{
	public:
		static ::System::RuntimeType** StaticGet_ValueType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DB0);
		}
		static ::System::RuntimeType** StaticGet_s_typedRef()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DB8);
		}
		static ::System::RuntimeType** StaticGet_EnumType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DC0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_s_SICtorParamTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DC8);
		}
		static ::System::RuntimeType** StaticGet_StringType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DD0);
		}
		static ::System::RuntimeType** StaticGet_DelegateType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DD8);
		}
		static ::System::RuntimeType** StaticGet_ObjectType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x15DE0);
		}
		// static const ::System::Reflection::BindingFlags MemberBindingMask; // 0x0
		// static const ::System::Reflection::BindingFlags InvocationMask; // 0x0
		// static const ::System::Reflection::BindingFlags BinderNonCreateInstance; // 0x0
		// static const ::System::Reflection::BindingFlags BinderGetSetProperty; // 0x0
		// static const ::System::Reflection::BindingFlags BinderSetInvokeProperty; // 0x0
		// static const ::System::Reflection::BindingFlags BinderGetSetField; // 0x0
		// static const ::System::Reflection::BindingFlags BinderSetInvokeField; // 0x0
		// static const ::System::Reflection::BindingFlags BinderNonFieldGetSet; // 0x0
		// static const ::System::Reflection::BindingFlags ClassicBindingMask; // 0x0
		::System::MonoTypeInfo* type_info; // 0x18
		::System::Object* GenericCache; // 0x20
		::System::Reflection::RuntimeConstructorInfo* m_serializationCtor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE__CCTOR_OFFSET))();
		}

		static ::System::Void ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* a1)
		{
			return ((::System::Void(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_THROWIFTYPENEVERVALIDGENERICARGUMENT_OFFSET))(a1);
		}

		static ::System::Void SanityCheckGenericArguments(::Il2CppArray<::System::RuntimeType*>* a1, ::Il2CppArray<::System::RuntimeType*>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::RuntimeType*>*, ::Il2CppArray<::System::RuntimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_SANITYCHECKGENERICARGUMENTS_OFFSET))(a1, a2);
		}

		static ::System::Void SplitName(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_SPLITNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FilterHelper(::System::Reflection::BindingFlags a1, ::System::String*& a2, ::System::Boolean a3, ::System::Boolean& a4, ::System::Boolean& a5, ::System::RuntimeType_MemberListType& a6)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FilterHelper_1(::System::Reflection::BindingFlags a1, ::System::String*& a2, ::System::Boolean& a3, ::System::RuntimeType_MemberListType& a4)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERHELPER_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FilterApplyPrefixLookup(::System::Reflection::MemberInfo* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYPREFIXLOOKUP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FilterApplyBase(::System::Reflection::MemberInfo* a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::String* a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYBASE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean FilterApplyType(::System::Type* a1, ::System::Reflection::BindingFlags a2, ::System::String* a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYTYPE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYCONSTRUCTORINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FilterApplyMethodBase(::System::Reflection::MethodBase* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::CallingConventions a4, ::Il2CppArray<::System::Type*>* a5)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODBASE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean IsSpecialSerializableType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISSPECIALSERIALIZABLETYPE_OFFSET))(this);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4, ::System::Boolean a5)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> GetConstructorCandidates(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4, ::System::Boolean a5)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORCANDIDATES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> GetPropertyCandidates(::System::String* a1, ::System::Reflection::BindingFlags a2, ::Il2CppArray<::System::Type*>* a3, ::System::Boolean a4)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTYCANDIDATES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> GetEventCandidates(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTCANDIDATES_OFFSET))(this, a1, a2, a3);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> GetFieldCandidates(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDCANDIDATES_OFFSET))(this, a1, a2, a3);
		}

		::System::RuntimeType_ListBuilder_1<::System::Type*> GetNestedTypeCandidates(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Type*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPECANDIDATES_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMEMBERS_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Reflection::CallingConventions a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags a1, ::System::Reflection::Binder* a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4, ::Il2CppArray<::System::Reflection::ParameterModifier>* a5)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Type* a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTYIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENT_OFFSET))(this, a1, a2);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELD_OFFSET))(this, a1, a2);
		}

		::System::Type* GetInterface(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACE_OFFSET))(this, a1, a2);
		}

		::System::Type* GetNestedType(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember(::System::String* a1, ::System::Reflection::MemberTypes a2, ::System::Reflection::BindingFlags a3)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_MODULE_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETRUNTIMEMODULE_OFFSET))(this);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ASSEMBLY_OFFSET))(this);
		}

		::System::Reflection::RuntimeAssembly* GetRuntimeAssembly()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETRUNTIMEASSEMBLY_OFFSET))(this);
		}

		::System::RuntimeTypeHandle get_TypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_TYPEHANDLE_OFFSET))(this);
		}

		::System::RuntimeTypeHandle GetTypeHandleInternal()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPEHANDLEINTERNAL_OFFSET))(this);
		}

		::System::Boolean IsInstanceOfType(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISINSTANCEOFTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsSubclassOf(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISSUBCLASSOF_OFFSET))(this, a1);
		}

		::System::Boolean IsAssignableFrom(::System::Reflection::TypeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_OFFSET))(this, a1);
		}

		::System::Boolean IsAssignableFrom_1(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_1_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

		::System::Type* get_BaseType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_BASETYPE_OFFSET))(this);
		}

		::System::RuntimeType* GetBaseType()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETBASETYPE_OFFSET))(this);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes GetAttributeFlagsImpl()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETATTRIBUTEFLAGSIMPL_OFFSET))(this);
		}

		::System::Boolean IsContextfulImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCONTEXTFULIMPL_OFFSET))(this);
		}

		::System::Boolean IsByRefImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISBYREFIMPL_OFFSET))(this);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISPRIMITIVEIMPL_OFFSET))(this);
		}

		::System::Boolean IsPointerImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISPOINTERIMPL_OFFSET))(this);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCOMOBJECTIMPL_OFFSET))(this);
		}

		::System::Boolean HasProxyAttributeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_HASPROXYATTRIBUTEIMPL_OFFSET))(this);
		}

		::System::Boolean IsValueTypeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISVALUETYPEIMPL_OFFSET))(this);
		}

		::System::Boolean get_IsEnum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISENUM_OFFSET))(this);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_HASELEMENTTYPEIMPL_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_IsSzArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET))(this);
		}

		::System::Boolean IsArrayImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISARRAYIMPL_OFFSET))(this);
		}

		::System::Int32 GetArrayRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETARRAYRANK_OFFSET))(this);
		}

		::System::Type* GetElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETELEMENTTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetEnumNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMNAMES_OFFSET))(this);
		}

		::System::Array* GetEnumValues()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMVALUES_OFFSET))(this);
		}

		::System::Type* GetEnumUnderlyingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMUNDERLYINGTYPE_OFFSET))(this);
		}

		::System::Boolean IsEnumDefined(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISENUMDEFINED_OFFSET))(this, a1);
		}

		::System::String* GetEnumName(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::RuntimeType*>* GetGenericArgumentsInternal()
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::System::Type* MakeGenericType(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGenericTypeDefinition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPEDEFINITION_OFFSET))(this);
		}

		::System::Boolean get_IsGenericParameter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISGENERICPARAMETER_OFFSET))(this);
		}

		::System::Int32 get_GenericParameterPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERPOSITION_OFFSET))(this);
		}

		::System::Type* GetGenericTypeDefinition()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICTYPEDEFINITION_OFFSET))(this);
		}

		::System::Boolean get_IsGenericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsConstructedGenericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetDefaultMembers()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERS_OFFSET))(this);
		}

		::System::Object* InvokeMember(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Object* a4, ::Il2CppArray<::System::Object*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6, ::System::Globalization::CultureInfo* a7, ::Il2CppArray<::System::String*>* a8)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_INVOKEMEMBER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::RuntimeType* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::RuntimeType* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CLONE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}

		::System::String* FormatTypeName(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FORMATTYPENAME_OFFSET))(this, a1);
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Int32 get_MetadataToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_METADATATOKEN_OFFSET))(this);
		}

		::System::Void CreateInstanceCheckThis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCECHECKTHIS_OFFSET))(this);
		}

		::System::Object* CreateInstanceImpl(::System::Reflection::BindingFlags a1, ::System::Reflection::Binder* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Globalization::CultureInfo* a4, ::Il2CppArray<::System::Object*>* a5, ::System::Threading::StackCrawlMark& a6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Object* CreateInstanceDefaultCtor(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEDEFAULTCTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::MonoCMethod* GetDefaultConstructor()
		{
			return ((::System::Reflection::MonoCMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTCONSTRUCTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetCorrespondingInflatedMethod(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDMETHOD_OFFSET))(this, a1);
		}

		::System::Reflection::ConstructorInfo* GetCorrespondingInflatedConstructor(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* GetMethod(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHOD_OFFSET))(this, a1);
		}

		::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Reflection::FieldInfo* GetField_1(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELD_1_OFFSET))(this, a1);
		}

		::System::String* GetDefaultMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERNAME_OFFSET))(this);
		}

		::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor()
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETSERIALIZATIONCTOR_OFFSET))(this);
		}

		::System::Object* CreateInstanceSlow(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCESLOW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* CreateInstanceMono(::System::Boolean a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEMONO_OFFSET))(this, a1);
		}

		::System::Object* CheckValue(::System::Object* a1, ::System::Reflection::Binder* a2, ::System::Globalization::CultureInfo* a3, ::System::Reflection::BindingFlags a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CHECKVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* TryConvertToType(::System::Object* a1, ::System::Boolean& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_TRYCONVERTTOTYPE_OFFSET))(this, a1, a2);
		}

		static ::System::Object* IsConvertibleToPrimitiveType(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCONVERTIBLETOPRIMITIVETYPE_OFFSET))(a1, a2);
		}

		::System::String* GetCachedName(::System::TypeNameKind a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeNameKind))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCACHEDNAME_OFFSET))(this, a1);
		}

		::System::Type* make_array_type(::System::Int32 a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKE_ARRAY_TYPE_OFFSET))(this, a1);
		}

		::System::Type* MakeArrayType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET))(this);
		}

		::System::Type* MakeArrayType_1(::System::Int32 a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_1_OFFSET))(this, a1);
		}

		::System::Type* make_byref_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKE_BYREF_TYPE_OFFSET))(this);
		}

		::System::Type* MakeByRefType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEBYREFTYPE_OFFSET))(this);
		}

		static ::System::Type* MakePointerType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET))(a1);
		}

		::System::Type* MakePointerType_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_1_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* get_StructLayoutAttribute()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_STRUCTLAYOUTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericParameterConstraints()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET))(this);
		}

		static ::System::Object* CreateInstanceForAnotherGenericParameter(::System::Type* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEFORANOTHERGENERICPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Type* MakeGenericType_1(::System::Type* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_1_OFFSET))(a1, a2);
		}

		::System::IntPtr GetMethodsByName_native(::System::IntPtr a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_NATIVE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>* GetMethodsByName(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3, ::System::RuntimeType* a4)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IntPtr GetPropertiesByName_native(::System::IntPtr a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_NATIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr GetConstructors_native(::System::Reflection::BindingFlags a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_NATIVE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>* GetConstructors_internal(::System::Reflection::BindingFlags a1, ::System::RuntimeType* a2)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_INTERNAL_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>* GetPropertiesByName(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Boolean a3, ::System::RuntimeType* a4)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type* a1)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACEMAP_OFFSET))(this, a1);
		}

		static ::System::Void GetInterfaceMapData(::System::Type* a1, ::System::Type* a2, ::Il2CppArray<::System::Reflection::MethodInfo*>*& a3, ::Il2CppArray<::System::Reflection::MethodInfo*>*& a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::MethodInfo*>*&, ::Il2CppArray<::System::Reflection::MethodInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACEMAPDATA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GUID_OFFSET))(this);
		}

		::System::Void GetPacking(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPACKING_OFFSET))(this, a1, a2);
		}

		static ::System::Type* GetTypeFromCLSIDImpl(::System::Guid a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPEFROMCLSIDIMPL_OFFSET))(a1, a2, a3);
		}

		::System::TypeCode GetTypeCodeImpl()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPECODEIMPL_OFFSET))(this);
		}

		static ::System::TypeCode GetTypeCodeImplInternal(::System::Type* a1)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPECODEIMPLINTERNAL_OFFSET))(a1);
		}

		static ::System::Type* GetTypeFromProgIDImpl(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPEFROMPROGIDIMPL_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsGenericCOMObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISGENERICCOMOBJECTIMPL_OFFSET))(this);
		}

		static ::System::Object* CreateInstanceInternal(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEINTERNAL_OFFSET))(a1);
		}

		::System::Reflection::MethodBase* get_DeclaringMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_DECLARINGMETHOD_OFFSET))(this);
		}

		::System::String* getFullName(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFULLNAME_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Type*>* GetGenericArgumentsInternal_1(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_1_OFFSET))(this, a1);
		}

		::System::Reflection::GenericParameterAttributes GetGenericParameterAttributes()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERATTRIBUTES_OFFSET))(this);
		}

		::System::Int32 GetGenericParameterPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERPOSITION_OFFSET))(this);
		}

		::System::IntPtr GetEvents_native(::System::IntPtr a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_NATIVE_OFFSET))(this, a1, a2);
		}

		::System::IntPtr GetFields_native(::System::IntPtr a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_NATIVE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>* GetFields_internal(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::RuntimeType* a3)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Reflection::RuntimeEventInfo*>* GetEvents_internal(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::RuntimeType* a3)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeEventInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Type*>* GetInterfaces()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACES_OFFSET))(this);
		}

		::System::IntPtr GetNestedTypes_native(::System::IntPtr a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_NATIVE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::RuntimeType*>* GetNestedTypes_internal(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_FULLNAME_OFFSET))(this);
		}

		::System::Boolean get_IsSZArray_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_1_OFFSET))(this);
		}

		::System::Boolean get_IsUserType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISUSERTYPE_OFFSET))(this);
		}
	};
}
