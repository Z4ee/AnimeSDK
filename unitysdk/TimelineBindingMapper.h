#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TIMELINEBINDINGMAPPER_GETBINDINGENUMTYPE_OFFSET UNITYSDK_OFFSET(0x19A8E4B0)
#define TIMELINEBINDINGMAPPER_GETBINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x19A8E380)
#define TIMELINEBINDINGMAPPER_HASBINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x19A8E5F0)
#define TIMELINEBINDINGMAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A8E6E0)

inline static constexpr unsigned int TimelineBindingMapper_TypeDefinitionIndex = 82203;

class TimelineBindingMapper : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::TimelineBindingType, ::System::Type*>** StaticGet_bindingMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::TimelineBindingType, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(TimelineBindingMapper_TypeDefinitionIndex)->GetStaticField(0x3D610);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::TimelineBindingType>** StaticGet_reverseBindingMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::TimelineBindingType>**)Il2CppClass::FromTypeDefinitionIndex(TimelineBindingMapper_TypeDefinitionIndex)->GetStaticField(0x3D618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER__CCTOR_OFFSET))();
	}

	static ::System::Type* GetBindingType(::TimelineBindingType bindingType)
	{
		return ((::System::Type*(*)(::TimelineBindingType))((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER_GETBINDINGTYPE_OFFSET))(bindingType);
	}

	static ::TimelineBindingType GetBindingEnumType(::System::Type* refType)
	{
		return ((::TimelineBindingType(*)(::System::Type*))((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER_GETBINDINGENUMTYPE_OFFSET))(refType);
	}

	static ::System::Boolean HasBindingType(::System::Type* refType)
	{
		return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + TIMELINEBINDINGMAPPER_HASBINDINGTYPE_OFFSET))(refType);
	}
};
