#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeEventInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_MONOEVENT_GETADDMETHOD_OFFSET UNITYSDK_OFFSET(0x163736D0)
#define SYSTEM_REFLECTION_MONOEVENT_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x16379A30)
#define SYSTEM_REFLECTION_MONOEVENT_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x16379A20)
#define SYSTEM_REFLECTION_MONOEVENT_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16379A10)
#define SYSTEM_REFLECTION_MONOEVENT_GETRAISEMETHOD_OFFSET UNITYSDK_OFFSET(0x16379840)
#define SYSTEM_REFLECTION_MONOEVENT_GETREMOVEMETHOD_OFFSET UNITYSDK_OFFSET(0x163798B0)
#define SYSTEM_REFLECTION_MONOEVENT_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x16379920)
#define SYSTEM_REFLECTION_MONOEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16379980)
#define SYSTEM_REFLECTION_MONOEVENT_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x16379950)
#define SYSTEM_REFLECTION_MONOEVENT_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x16379A00)
#define SYSTEM_REFLECTION_MONOEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163799B0)
#define SYSTEM_REFLECTION_MONOEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16379AB0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEvent_TypeDefinitionIndex = 614;

	class MonoEvent : public ::System::Reflection::RuntimeEventInfo
	{
	public:
		::System::IntPtr klass; // 0x18
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetAddMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GETADDMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* GetRaiseMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GETRAISEMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* GetRemoveMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GETREMOVEMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GET_NAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}
	};
}
