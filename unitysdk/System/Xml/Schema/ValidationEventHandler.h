#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Schema { class ValidationEventArgs; }

#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AE45DA0)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE45DE0)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE45D90)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE45CA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationEventHandler_TypeDefinitionIndex = 2168;

	class ValidationEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Xml::Schema::ValidationEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Xml::Schema::ValidationEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
