#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DAA6800)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAA6D10)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DAA6CA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAA6D90)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DAA6D00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DAA6CB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAA65A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA58B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DAA67F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DAA6710)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils__SceneNodes_d__68_TypeDefinitionIndex = 31773;

	class VectorUtils__SceneNodes_d__68 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* __7__wrap2; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*> __7__wrap1; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* __3__root; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* __2__current; // 0x38
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* root; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68___M__FINALLY2_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* System_Collections_Generic_IEnumerator_ToolBuddy_ThirdParty_VectorGraphics_SceneNode__get_Current()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* System_Collections_Generic_IEnumerable_ToolBuddy_ThirdParty_VectorGraphics_SceneNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
