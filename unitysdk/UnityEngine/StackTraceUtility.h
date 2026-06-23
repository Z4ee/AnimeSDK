#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }

#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTFORMATTEDSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1D678EE0)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1D678BD0)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTRINGFROMEXCEPTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D679640)
#define UNITYENGINE_STACKTRACEUTILITY_SETPROJECTFOLDER_OFFSET UNITYSDK_OFFSET(0x1D678B00)
#define UNITYENGINE_STACKTRACEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D679970)

namespace UnityEngine
{
	inline static constexpr unsigned int StackTraceUtility_TypeDefinitionIndex = 5360;

	class StackTraceUtility : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_projectFolder()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StackTraceUtility_TypeDefinitionIndex)->GetStaticField(0x5750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void SetProjectFolder(::System::String* folder)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_SETPROJECTFOLDER_OFFSET))(folder);
		}

		static ::System::String* ExtractStackTrace()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACE_OFFSET))();
		}

		static ::System::Void ExtractStringFromExceptionInternal(::System::Object* exceptiono, ::System::String*& message, ::System::String*& stackTrace)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTRINGFROMEXCEPTIONINTERNAL_OFFSET))(exceptiono, message, stackTrace);
		}

		static ::System::String* ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* stackTrace)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackTrace*))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTFORMATTEDSTACKTRACE_OFFSET))(stackTrace);
		}
	};
}
