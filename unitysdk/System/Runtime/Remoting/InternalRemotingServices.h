#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Remoting::Metadata { class SoapAttribute; }

#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18781D80)
#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18782240)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int InternalRemotingServices_TypeDefinitionIndex = 1201;

	class InternalRemotingServices : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__soapAttributes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(InternalRemotingServices_TypeDefinitionIndex)->GetStaticField(0xB330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::System::Object* a1)
		{
			return ((::System::Runtime::Remoting::Metadata::SoapAttribute*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET))(a1);
		}
	};
}
