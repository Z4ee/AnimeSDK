#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AttributeUsageAttribute; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MonoEvent; }
namespace System::Reflection { class MonoProperty; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_MONOCUSTOMATTRS_GETBASEEVENTDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD73760)
#define SYSTEM_MONOCUSTOMATTRS_GETBASEPROPERTYDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD73260)
#define SYSTEM_MONOCUSTOMATTRS_GETBASE_OFFSET UNITYSDK_OFFSET(0x1BD72900)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESBASE_OFFSET UNITYSDK_OFFSET(0x1BD71620)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BD72ED0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x1BD72EE0)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BD71130)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BD72D40)
#define SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD717C0)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BD71420)
#define SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD71140)
#define SYSTEM_MONOCUSTOMATTRS_ISDEFINEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BD73230)
#define SYSTEM_MONOCUSTOMATTRS_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BD72F60)
#define SYSTEM_MONOCUSTOMATTRS_ISUSERCATTRPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BD70E90)
#define SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGENOCACHE_OFFSET UNITYSDK_OFFSET(0x1BD73C70)
#define SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGE_OFFSET UNITYSDK_OFFSET(0x1BD72AF0)
#define SYSTEM_MONOCUSTOMATTRS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD73E80)

namespace System
{
	inline static constexpr unsigned int MonoCustomAttrs_TypeDefinitionIndex = 406;

	class MonoCustomAttrs : public ::System::Object
	{
	public:
		static ::System::Reflection::Assembly** StaticGet_corlib()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(MonoCustomAttrs_TypeDefinitionIndex)->GetStaticField(0xD450);
		}
		static ::System::AttributeUsageAttribute** StaticGet_DefaultAttributeUsage()
		{
			return (::System::AttributeUsageAttribute**)Il2CppClass::FromTypeDefinitionIndex(MonoCustomAttrs_TypeDefinitionIndex)->GetStaticField(0xD458);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>** StaticGet_usage_cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCustomAttrs_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsUserCattrProvider(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISUSERCATTRPROVIDER_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes_1(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETPSEUDOCUSTOMATTRIBUTES_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESBASE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Reflection::ICustomAttributeProvider* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTES_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Reflection::CustomAttributeData*>* GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* a1)
		{
			return ((::Il2CppArray<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATAINTERNAL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETCUSTOMATTRIBUTESDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDefined(::System::Reflection::ICustomAttributeProvider* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISDEFINED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_ISDEFINEDINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Reflection::PropertyInfo* GetBasePropertyDefinition(::System::Reflection::MonoProperty* a1)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::MonoProperty*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASEPROPERTYDEFINITION_OFFSET))(a1);
		}

		static ::System::Reflection::EventInfo* GetBaseEventDefinition(::System::Reflection::MonoEvent* a1)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::Reflection::MonoEvent*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASEEVENTDEFINITION_OFFSET))(a1);
		}

		static ::System::Reflection::ICustomAttributeProvider* GetBase(::System::Reflection::ICustomAttributeProvider* a1)
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_GETBASE_OFFSET))(a1);
		}

		static ::System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(::System::Type* a1)
		{
			return ((::System::AttributeUsageAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGENOCACHE_OFFSET))(a1);
		}

		static ::System::AttributeUsageAttribute* RetrieveAttributeUsage(::System::Type* a1)
		{
			return ((::System::AttributeUsageAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_MONOCUSTOMATTRS_RETRIEVEATTRIBUTEUSAGE_OFFSET))(a1);
		}
	};
}
