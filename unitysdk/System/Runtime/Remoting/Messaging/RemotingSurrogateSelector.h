#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Runtime::Remoting::Messaging { class ObjRefSurrogate; }
namespace System::Runtime::Remoting::Messaging { class RemotingSurrogate; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x19ED67B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ED6910)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED67A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int RemotingSurrogateSelector_TypeDefinitionIndex = 1366;

	class RemotingSurrogateSelector : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_cachedTypeObjRef()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(RemotingSurrogateSelector_TypeDefinitionIndex)->GetStaticField(0x910);
		}
		static ::System::Runtime::Remoting::Messaging::ObjRefSurrogate** StaticGet__objRefSurrogate()
		{
			return (::System::Runtime::Remoting::Messaging::ObjRefSurrogate**)Il2CppClass::FromTypeDefinitionIndex(RemotingSurrogateSelector_TypeDefinitionIndex)->GetStaticField(0x918);
		}
		static ::System::Runtime::Remoting::Messaging::RemotingSurrogate** StaticGet__objRemotingSurrogate()
		{
			return (::System::Runtime::Remoting::Messaging::RemotingSurrogate**)Il2CppClass::FromTypeDefinitionIndex(RemotingSurrogateSelector_TypeDefinitionIndex)->GetStaticField(0x920);
		}
		::System::Runtime::Serialization::ISurrogateSelector* _next; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR__CCTOR_OFFSET))();
		}

		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector*& ssout)
		{
			return ((::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_GETSURROGATE_OFFSET))(this, type, context, ssout);
		}
	};
}
