#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_SHADER_ONSHADERCOMPILE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF41480)
#define UNITYENGINE_SHADER_ONSHADERCOMPILE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF414B0)
#define UNITYENGINE_SHADER_ONSHADERCOMPILE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF40F80)
#define UNITYENGINE_SHADER_ONSHADERCOMPILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF40F60)

namespace UnityEngine
{
	inline static constexpr unsigned int Shader_OnShaderCompile_TypeDefinitionIndex = 5201;

	class Shader_OnShaderCompile : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ONSHADERCOMPILE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* shaderCompileInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ONSHADERCOMPILE_INVOKE_OFFSET))(this, shaderCompileInfos);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* shaderCompileInfos, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ONSHADERCOMPILE_BEGININVOKE_OFFSET))(this, shaderCompileInfos, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ONSHADERCOMPILE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
