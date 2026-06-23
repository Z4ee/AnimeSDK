#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Remoting::Metadata { class SoapAttribute; }

#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CD91750)
#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD91BE0)
#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD91740)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int InternalRemotingServices_TypeDefinitionIndex = 1246;

	class InternalRemotingServices : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__soapAttributes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(InternalRemotingServices_TypeDefinitionIndex)->GetStaticField(0x1390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::System::Object* reflectionObject)
		{
			return ((::System::Runtime::Remoting::Metadata::SoapAttribute*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET))(reflectionObject);
		}
	};
}
