#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Schema { class XdrBuilder; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7FDDB0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7FDDE0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7FD890)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FD870)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_XdrBeginChildFunction_TypeDefinitionIndex = 2105;

	class XdrBuilder_XdrBeginChildFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION_INVOKE_OFFSET))(this, builder);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XdrBuilder* builder, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION_BEGININVOKE_OFFSET))(this, builder, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBEGINCHILDFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
