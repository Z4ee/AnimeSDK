#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Schema { class XdrBuilder; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD1F5A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD1F5E0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD1EF80)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1EF60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_XdrBuildFunction_TypeDefinitionIndex = 2103;

	class XdrBuilder_XdrBuildFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION_INVOKE_OFFSET))(this, builder, obj, prefix);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION_BEGININVOKE_OFFSET))(this, builder, obj, prefix, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRBUILDFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
