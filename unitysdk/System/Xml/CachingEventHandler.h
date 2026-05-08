#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml { class XsdCachingReader; }

#define SYSTEM_XML_CACHINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A458270)
#define SYSTEM_XML_CACHINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4582A0)
#define SYSTEM_XML_CACHINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A457D70)
#define SYSTEM_XML_CACHINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A457D60)

namespace System::Xml
{
	inline static constexpr unsigned int CachingEventHandler_TypeDefinitionIndex = 1746;

	class CachingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_CACHINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::XsdCachingReader* cachingReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XsdCachingReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_CACHINGEVENTHANDLER_INVOKE_OFFSET))(this, cachingReader);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::XsdCachingReader* cachingReader, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::XsdCachingReader*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_CACHINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, cachingReader, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_CACHINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
