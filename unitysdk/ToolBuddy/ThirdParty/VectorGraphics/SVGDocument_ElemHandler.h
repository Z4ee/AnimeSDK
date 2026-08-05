#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DA9D360)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DA9D390)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DA8A8E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA88ED0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_ElemHandler_TypeDefinitionIndex = 31740;

	class SVGDocument_ElemHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_ELEMHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
