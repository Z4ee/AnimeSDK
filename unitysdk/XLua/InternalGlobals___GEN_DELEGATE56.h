#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_4A90D78D94DB1347;
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE550)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE590)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE530)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDE440)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE56_TypeDefinitionIndex = 47937;

	class InternalGlobals___GEN_DELEGATE56 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::UnityEngine::Material*& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
