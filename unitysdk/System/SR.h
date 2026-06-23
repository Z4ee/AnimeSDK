#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x1DC7FAB0)
#define SYSTEM_SR_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1DC7F990)
#define SYSTEM_SR_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1DC7FC70)
#define SYSTEM_SR_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET UNITYSDK_OFFSET(0x1DC7FC10)
#define SYSTEM_SR_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1DC7AA00)
#define SYSTEM_SR_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1DC7FBB0)
#define SYSTEM_SR_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET UNITYSDK_OFFSET(0x1DC7FCD0)
#define SYSTEM_SR_GET_ENDPOSITIONNOTREACHED_OFFSET UNITYSDK_OFFSET(0x1DC7FD30)
#define SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET UNITYSDK_OFFSET(0x1DC7FAF0)
#define SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET UNITYSDK_OFFSET(0x1DC7FB50)
#define SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x1DC7F8C0)
#define SYSTEM_SR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FD90)

namespace System
{
	inline static constexpr unsigned int SR_TypeDefinitionIndex = 6567;

	class SR : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x5B10);
		}
		static ::System::Type** StaticGet__ResourceType_k__BackingField()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x5B18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR__CCTOR_OFFSET))();
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* resourceKey, ::System::String* defaultString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_GETRESOURCESTRING_OFFSET))(resourceKey, defaultString);
		}

		static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SR_FORMAT_OFFSET))(resourceFormat, p1);
		}

		static ::System::String* get_NotSupported_CannotCallEqualsOnSpan()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET))();
		}

		static ::System::String* get_NotSupported_CannotCallGetHashCodeOnSpan()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET))();
		}

		static ::System::String* get_Argument_InvalidTypeWithPointersNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))();
		}

		static ::System::String* get_Argument_DestinationTooShort()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET))();
		}

		static ::System::String* get_Argument_BadFormatSpecifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET))();
		}

		static ::System::String* get_Argument_GWithPrecisionNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET))();
		}

		static ::System::String* get_Argument_PrecisionTooLarge()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET))();
		}

		static ::System::String* get_EndPositionNotReached()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ENDPOSITIONNOTREACHED_OFFSET))();
		}
	};
}
