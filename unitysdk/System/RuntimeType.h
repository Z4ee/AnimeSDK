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

#define SYSTEM_RUNTIMETYPE_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x17A2E050)
#define SYSTEM_RUNTIMETYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x17A2C930)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCECHECKTHIS_OFFSET UNITYSDK_OFFSET(0x17A2CF00)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEDEFAULTCTOR_OFFSET UNITYSDK_OFFSET(0x17A2DA70)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEFORANOTHERGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x17A2EDB0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEIMPL_OFFSET UNITYSDK_OFFSET(0x17A2D290)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A2E040)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEMONO_OFFSET UNITYSDK_OFFSET(0x17A2DE20)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCESLOW_OFFSET UNITYSDK_OFFSET(0x17A2DB10)
#define SYSTEM_RUNTIMETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A2C920)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYBASE_OFFSET UNITYSDK_OFFSET(0x17A23A50)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYCONSTRUCTORINFO_OFFSET UNITYSDK_OFFSET(0x17A24050)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODBASE_OFFSET UNITYSDK_OFFSET(0x17A23DA0)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODINFO_OFFSET UNITYSDK_OFFSET(0x17A23D40)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYPREFIXLOOKUP_OFFSET UNITYSDK_OFFSET(0x17A239C0)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYTYPE_OFFSET UNITYSDK_OFFSET(0x17A23C40)
#define SYSTEM_RUNTIMETYPE_FILTERHELPER_1_OFFSET UNITYSDK_OFFSET(0x17A238E0)
#define SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET UNITYSDK_OFFSET(0x17A237B0)
#define SYSTEM_RUNTIMETYPE_FORMATTYPENAME_OFFSET UNITYSDK_OFFSET(0x17A2CC60)
#define SYSTEM_RUNTIMETYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x17A29E90)
#define SYSTEM_RUNTIMETYPE_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x17A29970)
#define SYSTEM_RUNTIMETYPE_GETBASETYPE_OFFSET UNITYSDK_OFFSET(0x17A241D0)
#define SYSTEM_RUNTIMETYPE_GETCACHEDNAME_OFFSET UNITYSDK_OFFSET(0x17A2CDE0)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORCANDIDATES_OFFSET UNITYSDK_OFFSET(0x17A24DF0)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x17A27C30)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x17A25320)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_NATIVE_OFFSET UNITYSDK_OFFSET(0x17A2EF10)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x17A27590)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17A2DD30)
#define SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17A2DCB0)
#define SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDMETHOD_OFFSET UNITYSDK_OFFSET(0x17A2DCA0)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x17A2CBE0)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x17A2CA00)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17A2C9B0)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17A2DB40)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x17A2B3C0)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x17A2B330)
#define SYSTEM_RUNTIMETYPE_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x17A29F20)
#define SYSTEM_RUNTIMETYPE_GETENUMNAMES_OFFSET UNITYSDK_OFFSET(0x17A2A000)
#define SYSTEM_RUNTIMETYPE_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x17A2A880)
#define SYSTEM_RUNTIMETYPE_GETENUMUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x17A2A250)
#define SYSTEM_RUNTIMETYPE_GETENUMVALUES_OFFSET UNITYSDK_OFFSET(0x17A2A0D0)
#define SYSTEM_RUNTIMETYPE_GETEVENTCANDIDATES_OFFSET UNITYSDK_OFFSET(0x17A25E90)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x17A261C0)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_NATIVE_OFFSET UNITYSDK_OFFSET(0x17A2F4B0)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x17A27640)
#define SYSTEM_RUNTIMETYPE_GETEVENT_OFFSET UNITYSDK_OFFSET(0x17A28060)
#define SYSTEM_RUNTIMETYPE_GETFIELDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x17A26630)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x17A26960)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_NATIVE_OFFSET UNITYSDK_OFFSET(0x17A2F4C0)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x17A27690)
#define SYSTEM_RUNTIMETYPE_GETFIELD_1_OFFSET UNITYSDK_OFFSET(0x17A2DDA0)
#define SYSTEM_RUNTIMETYPE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x17A28210)
#define SYSTEM_RUNTIMETYPE_GETFULLNAME_OFFSET UNITYSDK_OFFSET(0x17A2F490)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x17A2AA40)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A2AA00)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x17A2AA50)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17A29D90)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x17A297E0)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x17A2B0C0)
#define SYSTEM_RUNTIMETYPE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x17A2B150)
#define SYSTEM_RUNTIMETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A2F580)
#define SYSTEM_RUNTIMETYPE_GETINTERFACEMAPDATA_OFFSET UNITYSDK_OFFSET(0x17A2F220)
#define SYSTEM_RUNTIMETYPE_GETINTERFACEMAP_OFFSET UNITYSDK_OFFSET(0x17A2EF20)
#define SYSTEM_RUNTIMETYPE_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x17A28BA0)
#define SYSTEM_RUNTIMETYPE_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x17A286D0)
#define SYSTEM_RUNTIMETYPE_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x17A27730)
#define SYSTEM_RUNTIMETYPE_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x17A28E90)
#define SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET UNITYSDK_OFFSET(0x17A24500)
#define SYSTEM_RUNTIMETYPE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x17A27970)
#define SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_NATIVE_OFFSET UNITYSDK_OFFSET(0x17A2EEF0)
#define SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_OFFSET UNITYSDK_OFFSET(0x17A24970)
#define SYSTEM_RUNTIMETYPE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x17A27530)
#define SYSTEM_RUNTIMETYPE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x17A2DCC0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPECANDIDATES_OFFSET UNITYSDK_OFFSET(0x17A26DD0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x17A27080)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_NATIVE_OFFSET UNITYSDK_OFFSET(0x17A2F4D0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x17A276E0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x17A28BC0)
#define SYSTEM_RUNTIMETYPE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x17A2C940)
#define SYSTEM_RUNTIMETYPE_GETPACKING_OFFSET UNITYSDK_OFFSET(0x17A2F310)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_NATIVE_OFFSET UNITYSDK_OFFSET(0x17A2EF00)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_OFFSET UNITYSDK_OFFSET(0x17A25A10)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17A275F0)
#define SYSTEM_RUNTIMETYPE_GETPROPERTYCANDIDATES_OFFSET UNITYSDK_OFFSET(0x17A255B0)
#define SYSTEM_RUNTIMETYPE_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x17A27E20)
#define SYSTEM_RUNTIMETYPE_GETRUNTIMEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17A292E0)
#define SYSTEM_RUNTIMETYPE_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x17A29270)
#define SYSTEM_RUNTIMETYPE_GETSERIALIZATIONCTOR_OFFSET UNITYSDK_OFFSET(0x17A1C6F0)
#define SYSTEM_RUNTIMETYPE_GETTYPECODEIMPLINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A2F430)
#define SYSTEM_RUNTIMETYPE_GETTYPECODEIMPL_OFFSET UNITYSDK_OFFSET(0x17A2F400)
#define SYSTEM_RUNTIMETYPE_GETTYPEFROMCLSIDIMPL_OFFSET UNITYSDK_OFFSET(0x17A2F3B0)
#define SYSTEM_RUNTIMETYPE_GETTYPEFROMPROGIDIMPL_OFFSET UNITYSDK_OFFSET(0x17A2F440)
#define SYSTEM_RUNTIMETYPE_GETTYPEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17A29380)
#define SYSTEM_RUNTIMETYPE_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x17A2F4E0)
#define SYSTEM_RUNTIMETYPE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17A292B0)
#define SYSTEM_RUNTIMETYPE_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x17A1F5D0)
#define SYSTEM_RUNTIMETYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17A2D0F0)
#define SYSTEM_RUNTIMETYPE_GET_DECLARINGMETHOD_OFFSET UNITYSDK_OFFSET(0x17A2F4A0)
#define SYSTEM_RUNTIMETYPE_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x17A2CEB0)
#define SYSTEM_RUNTIMETYPE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x17A1C950)
#define SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17A298B0)
#define SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x17A2AFC0)
#define SYSTEM_RUNTIMETYPE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x17A2F230)
#define SYSTEM_RUNTIMETYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x17A2B2D0)
#define SYSTEM_RUNTIMETYPE_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x17A29CB0)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x17A29880)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x17A2AF40)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x17A2B200)
#define SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_1_OFFSET UNITYSDK_OFFSET(0x17A2F590)
#define SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x17A29DB0)
#define SYSTEM_RUNTIMETYPE_GET_ISUSERTYPE_OFFSET UNITYSDK_OFFSET(0x17A2F630)
#define SYSTEM_RUNTIMETYPE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x17A2CE50)
#define SYSTEM_RUNTIMETYPE_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x17A2CEC0)
#define SYSTEM_RUNTIMETYPE_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x17A29250)
#define SYSTEM_RUNTIMETYPE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x17A2F4F0)
#define SYSTEM_RUNTIMETYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17A28BB0)
#define SYSTEM_RUNTIMETYPE_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x17A2CEA0)
#define SYSTEM_RUNTIMETYPE_GET_STRUCTLAYOUTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17A2ED90)
#define SYSTEM_RUNTIMETYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x17A29340)
#define SYSTEM_RUNTIMETYPE_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x17A29960)
#define SYSTEM_RUNTIMETYPE_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x17A29CF0)
#define SYSTEM_RUNTIMETYPE_HASPROXYATTRIBUTEIMPL_OFFSET UNITYSDK_OFFSET(0x17A29B70)
#define SYSTEM_RUNTIMETYPE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x17A2B470)
#define SYSTEM_RUNTIMETYPE_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x17A29E50)
#define SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A29620)
#define SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x17A29540)
#define SYSTEM_RUNTIMETYPE_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x17A29A70)
#define SYSTEM_RUNTIMETYPE_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x17A29B50)
#define SYSTEM_RUNTIMETYPE_ISCONTEXTFULIMPL_OFFSET UNITYSDK_OFFSET(0x17A299B0)
#define SYSTEM_RUNTIMETYPE_ISCONVERTIBLETOPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x17A2E390)
#define SYSTEM_RUNTIMETYPE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x17A2CAF0)
#define SYSTEM_RUNTIMETYPE_ISENUMDEFINED_OFFSET UNITYSDK_OFFSET(0x17A2A330)
#define SYSTEM_RUNTIMETYPE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17A29740)
#define SYSTEM_RUNTIMETYPE_ISGENERICCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x17A2DA60)
#define SYSTEM_RUNTIMETYPE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x17A293A0)
#define SYSTEM_RUNTIMETYPE_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x17A29B10)
#define SYSTEM_RUNTIMETYPE_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x17A29A90)
#define SYSTEM_RUNTIMETYPE_ISSPECIALSERIALIZABLETYPE_OFFSET UNITYSDK_OFFSET(0x17A24100)
#define SYSTEM_RUNTIMETYPE_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x17A29400)
#define SYSTEM_RUNTIMETYPE_ISVALUETYPEIMPL_OFFSET UNITYSDK_OFFSET(0x17A29C10)
#define SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_1_OFFSET UNITYSDK_OFFSET(0x17A2EBD0)
#define SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x17A2EB80)
#define SYSTEM_RUNTIMETYPE_MAKEBYREFTYPE_OFFSET UNITYSDK_OFFSET(0x17A2ECA0)
#define SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_1_OFFSET UNITYSDK_OFFSET(0x17A2AF70)
#define SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x17A2AA90)
#define SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_1_OFFSET UNITYSDK_OFFSET(0x17A2ED40)
#define SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x17A2ED10)
#define SYSTEM_RUNTIMETYPE_MAKE_ARRAY_TYPE_OFFSET UNITYSDK_OFFSET(0x17A2EB20)
#define SYSTEM_RUNTIMETYPE_MAKE_BYREF_TYPE_OFFSET UNITYSDK_OFFSET(0x17A2EC80)
#define SYSTEM_RUNTIMETYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17A1E940)
#define SYSTEM_RUNTIMETYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17A244F0)
#define SYSTEM_RUNTIMETYPE_SANITYCHECKGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x17A23520)
#define SYSTEM_RUNTIMETYPE_SPLITNAME_OFFSET UNITYSDK_OFFSET(0x17A23710)
#define SYSTEM_RUNTIMETYPE_THROWIFTYPENEVERVALIDGENERICARGUMENT_OFFSET UNITYSDK_OFFSET(0x17A23420)
#define SYSTEM_RUNTIMETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A23510)
#define SYSTEM_RUNTIMETYPE_TRYCONVERTTOTYPE_OFFSET UNITYSDK_OFFSET(0x17A2E170)
#define SYSTEM_RUNTIMETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A2F640)
#define SYSTEM_RUNTIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A240B0)

namespace System
{
	inline static constexpr unsigned int RuntimeType_TypeDefinitionIndex = 319;

	class RuntimeType : public ::System::Reflection::TypeInfo
	{
	public:
		static ::System::RuntimeType** StaticGet_s_typedRef()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A30);
		}
		static ::System::RuntimeType** StaticGet_ObjectType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A38);
		}
		static ::System::RuntimeType** StaticGet_DelegateType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A40);
		}
		static ::System::RuntimeType** StaticGet_EnumType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A48);
		}
		static ::System::RuntimeType** StaticGet_StringType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A50);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_s_SICtorParamTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A58);
		}
		static ::System::RuntimeType** StaticGet_ValueType()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x8A60);
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

		static ::System::Void ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_THROWIFTYPENEVERVALIDGENERICARGUMENT_OFFSET))(type);
		}

		static ::System::Void SanityCheckGenericArguments(::Il2CppArray<::System::RuntimeType*>* genericArguments, ::Il2CppArray<::System::RuntimeType*>* genericParamters)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::RuntimeType*>*, ::Il2CppArray<::System::RuntimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_SANITYCHECKGENERICARGUMENTS_OFFSET))(genericArguments, genericParamters);
		}

		static ::System::Void SplitName(::System::String* fullname, ::System::String*& name, ::System::String*& ns)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_SPLITNAME_OFFSET))(fullname, name, ns);
		}

		static ::System::Void FilterHelper(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean allowPrefixLookup, ::System::Boolean& prefixLookup, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET))(bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
		}

		static ::System::Void FilterHelper_1(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERHELPER_1_OFFSET))(bindingFlags, name, ignoreCase, listType);
		}

		static ::System::Boolean FilterApplyPrefixLookup(::System::Reflection::MemberInfo* memberInfo, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYPREFIXLOOKUP_OFFSET))(memberInfo, name, ignoreCase);
		}

		static ::System::Boolean FilterApplyBase(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, ::System::Boolean isPublic, ::System::Boolean isNonProtectedInternal, ::System::Boolean isStatic, ::System::String* name, ::System::Boolean prefixLookup)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYBASE_OFFSET))(memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
		}

		static ::System::Boolean FilterApplyType(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::System::String* name, ::System::Boolean prefixLookup, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYTYPE_OFFSET))(type, bindingFlags, name, prefixLookup, ns);
		}

		static ::System::Boolean FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODINFO_OFFSET))(method, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYCONSTRUCTORINFO_OFFSET))(constructor, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean FilterApplyMethodBase(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODBASE_OFFSET))(methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
		}

		::System::Boolean IsSpecialSerializableType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISSPECIALSERIALIZABLETYPE_OFFSET))(this);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> GetConstructorCandidates(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORCANDIDATES_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> GetPropertyCandidates(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTYCANDIDATES_OFFSET))(this, name, bindingAttr, types, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> GetEventCandidates(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTCANDIDATES_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> GetFieldCandidates(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDCANDIDATES_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::RuntimeType_ListBuilder_1<::System::Type*> GetNestedTypeCandidates(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::RuntimeType_ListBuilder_1<::System::Type*>(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPECANDIDATES_OFFSET))(this, fullname, bindingAttr, allowPrefixLookup);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODS_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIES_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMEMBERS_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODIMPL_OFFSET))(this, name, bindingAttr, binder, callConv, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORIMPL_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTYIMPL_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENT_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELD_OFFSET))(this, name, bindingAttr);
		}

		::System::Type* GetInterface(::System::String* fullname, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACE_OFFSET))(this, fullname, ignoreCase);
		}

		::System::Type* GetNestedType(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPE_OFFSET))(this, fullname, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMember(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMEMBER_OFFSET))(this, name, type, bindingAttr);
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

		::System::Boolean IsInstanceOfType(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISINSTANCEOFTYPE_OFFSET))(this, o);
		}

		::System::Boolean IsSubclassOf(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISSUBCLASSOF_OFFSET))(this, type);
		}

		::System::Boolean IsAssignableFrom(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_OFFSET))(this, typeInfo);
		}

		::System::Boolean IsAssignableFrom_1(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_1_OFFSET))(this, c);
		}

		::System::Boolean IsEquivalentTo(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISEQUIVALENTTO_OFFSET))(this, other);
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

		::System::Boolean IsEnumDefined(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISENUMDEFINED_OFFSET))(this, value);
		}

		::System::String* GetEnumName(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::System::RuntimeType*>* GetGenericArgumentsInternal()
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::System::Type* MakeGenericType(::Il2CppArray<::System::Type*>* instantiation)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET))(this, instantiation);
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

		::System::Object* InvokeMember(::System::String* name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* providedArgs, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::String*>* namedParams)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_INVOKEMEMBER_OFFSET))(this, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CLONE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}

		::System::String* FormatTypeName(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FORMATTYPENAME_OFFSET))(this, serialization);
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

		::System::Object* CreateInstanceImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::Object*>* activationAttributes, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEIMPL_OFFSET))(this, bindingAttr, binder, args, culture, activationAttributes, stackMark);
		}

		::System::Object* CreateInstanceDefaultCtor(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEDEFAULTCTOR_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Reflection::MonoCMethod* GetDefaultConstructor()
		{
			return ((::System::Reflection::MonoCMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTCONSTRUCTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetCorrespondingInflatedMethod(::System::Reflection::MethodInfo* generic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDMETHOD_OFFSET))(this, generic);
		}

		::System::Reflection::ConstructorInfo* GetCorrespondingInflatedConstructor(::System::Reflection::ConstructorInfo* generic)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCORRESPONDINGINFLATEDCONSTRUCTOR_OFFSET))(this, generic);
		}

		::System::Reflection::MethodInfo* GetMethod(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHOD_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTOR_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* GetField_1(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELD_1_OFFSET))(this, fromNoninstanciated);
		}

		::System::String* GetDefaultMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERNAME_OFFSET))(this);
		}

		::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor()
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETSERIALIZATIONCTOR_OFFSET))(this);
		}

		::System::Object* CreateInstanceSlow(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCESLOW_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Object* CreateInstanceMono(::System::Boolean nonPublic)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEMONO_OFFSET))(this, nonPublic);
		}

		::System::Object* CheckValue(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CHECKVALUE_OFFSET))(this, value, binder, culture, invokeAttr);
		}

		::System::Object* TryConvertToType(::System::Object* value, ::System::Boolean& failed)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_TRYCONVERTTOTYPE_OFFSET))(this, value, failed);
		}

		static ::System::Object* IsConvertibleToPrimitiveType(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCONVERTIBLETOPRIMITIVETYPE_OFFSET))(value, targetType);
		}

		::System::String* GetCachedName(::System::TypeNameKind kind)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeNameKind))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCACHEDNAME_OFFSET))(this, kind);
		}

		::System::Type* make_array_type(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKE_ARRAY_TYPE_OFFSET))(this, rank);
		}

		::System::Type* MakeArrayType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET))(this);
		}

		::System::Type* MakeArrayType_1(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_1_OFFSET))(this, rank);
		}

		::System::Type* make_byref_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKE_BYREF_TYPE_OFFSET))(this);
		}

		::System::Type* MakeByRefType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEBYREFTYPE_OFFSET))(this);
		}

		static ::System::Type* MakePointerType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET))(type);
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

		static ::System::Object* CreateInstanceForAnotherGenericParameter(::System::Type* genericType, ::System::RuntimeType* genericArgument)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEFORANOTHERGENERICPARAMETER_OFFSET))(genericType, genericArgument);
		}

		static ::System::Type* MakeGenericType_1(::System::Type* gt, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_1_OFFSET))(gt, types);
		}

		::System::IntPtr GetMethodsByName_native(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_NATIVE_OFFSET))(this, namePtr, bindingAttr, ignoreCase);
		}

		::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>* GetMethodsByName(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_OFFSET))(this, name, bindingAttr, ignoreCase, reflectedType);
		}

		::System::IntPtr GetPropertiesByName_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_NATIVE_OFFSET))(this, name, bindingAttr, icase);
		}

		::System::IntPtr GetConstructors_native(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_NATIVE_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>* GetConstructors_internal(::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_INTERNAL_OFFSET))(this, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>* GetPropertiesByName(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_OFFSET))(this, name, bindingAttr, icase, reflectedType);
		}

		::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type* ifaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACEMAP_OFFSET))(this, ifaceType);
		}

		static ::System::Void GetInterfaceMapData(::System::Type* t, ::System::Type* iface, ::Il2CppArray<::System::Reflection::MethodInfo*>*& targets, ::Il2CppArray<::System::Reflection::MethodInfo*>*& methods)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::MethodInfo*>*&, ::Il2CppArray<::System::Reflection::MethodInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACEMAPDATA_OFFSET))(t, iface, targets, methods);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GUID_OFFSET))(this);
		}

		::System::Void GetPacking(::System::Int32& packing, ::System::Int32& size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPACKING_OFFSET))(this, packing, size);
		}

		static ::System::Type* GetTypeFromCLSIDImpl(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPEFROMCLSIDIMPL_OFFSET))(clsid, server, throwOnError);
		}

		::System::TypeCode GetTypeCodeImpl()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPECODEIMPL_OFFSET))(this);
		}

		static ::System::TypeCode GetTypeCodeImplInternal(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPECODEIMPLINTERNAL_OFFSET))(type);
		}

		static ::System::Type* GetTypeFromProgIDImpl(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPEFROMPROGIDIMPL_OFFSET))(progID, server, throwOnError);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsGenericCOMObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISGENERICCOMOBJECTIMPL_OFFSET))(this);
		}

		static ::System::Object* CreateInstanceInternal(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEINTERNAL_OFFSET))(type);
		}

		::System::Reflection::MethodBase* get_DeclaringMethod()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_DECLARINGMETHOD_OFFSET))(this);
		}

		::System::String* getFullName(::System::Boolean full_name, ::System::Boolean assembly_qualified)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFULLNAME_OFFSET))(this, full_name, assembly_qualified);
		}

		::Il2CppArray<::System::Type*>* GetGenericArgumentsInternal_1(::System::Boolean runtimeArray)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_1_OFFSET))(this, runtimeArray);
		}

		::System::Reflection::GenericParameterAttributes GetGenericParameterAttributes()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERATTRIBUTES_OFFSET))(this);
		}

		::System::Int32 GetGenericParameterPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERPOSITION_OFFSET))(this);
		}

		::System::IntPtr GetEvents_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_NATIVE_OFFSET))(this, name, bindingAttr);
		}

		::System::IntPtr GetFields_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_NATIVE_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>* GetFields_internal(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_INTERNAL_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimeEventInfo*>* GetEvents_internal(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeEventInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_INTERNAL_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Type*>* GetInterfaces()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACES_OFFSET))(this);
		}

		::System::IntPtr GetNestedTypes_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_NATIVE_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::RuntimeType*>* GetNestedTypes_internal(::System::String* displayName, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_INTERNAL_OFFSET))(this, displayName, bindingAttr);
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
