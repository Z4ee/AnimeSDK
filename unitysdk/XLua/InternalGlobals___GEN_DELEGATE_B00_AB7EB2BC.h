#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_4A90D78D94DB1347;
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1DF80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1DFC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1DF60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1DE70)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_AB7EB2BC_TypeDefinitionIndex = 50524;

	class InternalGlobals___GEN_DELEGATE_B00_AB7EB2BC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::UnityEngine::Material*& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
