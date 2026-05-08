#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_DECREMENTINDENTATION_OFFSET UNITYSDK_OFFSET(0x191DB6F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_GETLOG_OFFSET UNITYSDK_OFFSET(0x191D7D20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_INCREMENTINDENTATION_OFFSET UNITYSDK_OFFSET(0x191DB5F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x191D6DB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_LOGLINE_OFFSET UNITYSDK_OFFSET(0x191DA500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x191D4C20)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphLogger_TypeDefinitionIndex = 9514;

	class RenderGraphLogger : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* m_Builder; // 0x10
		::System::Int32 m_CurrentIndentation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void IncrementIndentation(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_INCREMENTINDENTATION_OFFSET))(this, value);
		}

		::System::Void DecrementIndentation(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_DECREMENTINDENTATION_OFFSET))(this, value);
		}

		::System::Void LogLine(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_LOGLINE_OFFSET))(this, format, args);
		}

		::System::String* GetLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGGER_GETLOG_OFFSET))(this);
		}
	};
}
