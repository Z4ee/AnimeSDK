#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Schema { class XdrBuilder; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B593250)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B593280)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B592D50)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B592D40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_XdrEndChildFunction_TypeDefinitionIndex = 2107;

	class XdrBuilder_XdrEndChildFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION_INVOKE_OFFSET))(this, builder);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XdrBuilder* builder, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION_BEGININVOKE_OFFSET))(this, builder, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENDCHILDFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
