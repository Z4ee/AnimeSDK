#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x186259C0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18625A40)
#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18624DA0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x186256C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlQualifiedName_HashCodeOfStringDelegate_TypeDefinitionIndex = 1956;

	class XmlQualifiedName_HashCodeOfStringDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* s, ::System::Int32 sLen, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET))(this, s, sLen, additionalEntropy);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* s, ::System::Int32 sLen, ::System::Int64 additionalEntropy, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_BEGININVOKE_OFFSET))(this, s, sLen, additionalEntropy, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
