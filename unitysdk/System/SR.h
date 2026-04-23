#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x19EB5CA0)
#define SYSTEM_SR_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x19EB5A20)
#define SYSTEM_SR_GET_ARG_KEYNOTFOUNDWITHKEY_OFFSET UNITYSDK_OFFSET(0x19EB5EB0)
#define SYSTEM_SR_GET_ARRAYINITIALIZEDSTATENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x19EB5F20)
#define SYSTEM_SR_GET_ARRAYLENGTHSNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x19EB5F90)
#define SYSTEM_SR_GET_COLLECTIONMODIFIEDDURINGENUMERATION_OFFSET UNITYSDK_OFFSET(0x19EB6000)
#define SYSTEM_SR_GET_DUPLICATEKEY_OFFSET UNITYSDK_OFFSET(0x19EB6070)
#define SYSTEM_SR_GET_INVALIDEMPTYOPERATION_OFFSET UNITYSDK_OFFSET(0x19EB60E0)
#define SYSTEM_SR_GET_INVALIDOPERATIONONDEFAULTARRAY_OFFSET UNITYSDK_OFFSET(0x19EB6150)
#define SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x19EB5BB0)
#define SYSTEM_SR_USINGRESOURCEKEYS_OFFSET UNITYSDK_OFFSET(0x19EB59C0)
#define SYSTEM_SR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EB61C0)

namespace System
{
	inline static constexpr unsigned int SR_TypeDefinitionIndex = 9087;

	class SR : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x9E0);
		}
		static ::System::Boolean* StaticGet_s_usingResourceKeys()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR__CCTOR_OFFSET))();
		}

		static ::System::Boolean UsingResourceKeys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_USINGRESOURCEKEYS_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* resourceKey)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_GETRESOURCESTRING_OFFSET))(resourceKey);
		}

		static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SR_FORMAT_OFFSET))(resourceFormat, p1);
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* get_Arg_KeyNotFoundWithKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARG_KEYNOTFOUNDWITHKEY_OFFSET))();
		}

		static ::System::String* get_ArrayInitializedStateNotEqual()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARRAYINITIALIZEDSTATENOTEQUAL_OFFSET))();
		}

		static ::System::String* get_ArrayLengthsNotEqual()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARRAYLENGTHSNOTEQUAL_OFFSET))();
		}

		static ::System::String* get_CollectionModifiedDuringEnumeration()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_COLLECTIONMODIFIEDDURINGENUMERATION_OFFSET))();
		}

		static ::System::String* get_DuplicateKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_DUPLICATEKEY_OFFSET))();
		}

		static ::System::String* get_InvalidEmptyOperation()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_INVALIDEMPTYOPERATION_OFFSET))();
		}

		static ::System::String* get_InvalidOperationOnDefaultArray()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_INVALIDOPERATIONONDEFAULTARRAY_OFFSET))();
		}
	};
}
