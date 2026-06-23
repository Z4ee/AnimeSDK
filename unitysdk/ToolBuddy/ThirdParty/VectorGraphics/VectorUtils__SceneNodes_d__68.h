#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C61DCA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C61E1A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C61E130)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C61E220)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C61E190)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C61E140)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C61DA40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61CD60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C61DC90)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SCENENODES_D__68___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1C61DBB0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils__SceneNodes_d__68_TypeDefinitionIndex = 31154;

	class VectorUtils__SceneNodes_d__68 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*> __7__wrap1; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* __2__current; // 0x28
		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* __7__wrap2; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* __3__root; // 0x38
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
