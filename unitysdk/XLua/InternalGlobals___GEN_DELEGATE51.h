#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_E05E7A6D9DE9138B;
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5B790)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5B7D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5B150)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49FB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE51_TypeDefinitionIndex = 40468;

	class InternalGlobals___GEN_DELEGATE51 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_INVOKE_OFFSET))(this, pConfig, pAssetLoader, pMat);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_BEGININVOKE_OFFSET))(this, pConfig, pAssetLoader, pMat, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Material*& pMat, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_ENDINVOKE_OFFSET))(this, pMat, result);
		}
	};
}
