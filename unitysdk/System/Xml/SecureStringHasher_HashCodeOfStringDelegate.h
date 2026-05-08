#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5992A0)
#define SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B599340)
#define SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B598CC0)
#define SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B598CB0)

namespace System::Xml
{
	inline static constexpr unsigned int SecureStringHasher_HashCodeOfStringDelegate_TypeDefinitionIndex = 1700;

	class SecureStringHasher_HashCodeOfStringDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* s, ::System::Int32 sLen, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET))(this, s, sLen, additionalEntropy);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* s, ::System::Int32 sLen, ::System::Int64 additionalEntropy, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE_BEGININVOKE_OFFSET))(this, s, sLen, additionalEntropy, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_HASHCODEOFSTRINGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
