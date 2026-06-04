#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AED2560)
#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AED25E0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AED1EA0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AED24E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlQualifiedName_HashCodeOfStringDelegate_TypeDefinitionIndex = 1957;

	class XmlQualifiedName_HashCodeOfStringDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::Int64 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_HASHCODEOFSTRINGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
