#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }

#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTFORMATTEDSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x18A51D90)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACENOALLOC_OFFSET UNITYSDK_OFFSET(0x18A525C0)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x18A51AC0)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTRINGFROMEXCEPTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A52650)
#define UNITYENGINE_STACKTRACEUTILITY_SETPROJECTFOLDER_OFFSET UNITYSDK_OFFSET(0x18A51A10)
#define UNITYENGINE_STACKTRACEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A52950)

namespace UnityEngine
{
	inline static constexpr unsigned int StackTraceUtility_TypeDefinitionIndex = 4149;

	class StackTraceUtility : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_projectFolder()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StackTraceUtility_TypeDefinitionIndex)->GetStaticField(0x14560);
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

		static ::System::Int32 ExtractStackTraceNoAlloc(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 actuallyLen)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACENOALLOC_OFFSET))(buffer, actuallyLen);
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
