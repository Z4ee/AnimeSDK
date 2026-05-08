#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ExternalException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A477A0)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A475A0)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19A47630)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19A476C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19A47710)
#define SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A474E0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int CheckoutException_TypeDefinitionIndex = 3033;

	class CheckoutException : public ::System::Runtime::InteropServices::ExternalException
	{
	public:
		static ::System::ComponentModel::Design::CheckoutException** StaticGet_Canceled()
		{
			return (::System::ComponentModel::Design::CheckoutException**)Il2CppClass::FromTypeDefinitionIndex(CheckoutException_TypeDefinitionIndex)->GetStaticField(0x2650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_2_OFFSET))(this, message, errorCode);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CTOR_4_OFFSET))(this, message, innerException);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_CHECKOUTEXCEPTION__CCTOR_OFFSET))();
		}
	};
}
