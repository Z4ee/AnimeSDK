#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B146750)
#define UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B1463D0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B146720)
#define UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B1556B0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B1556C0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1463C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int WingedEdgeEnumerator_TypeDefinitionIndex = 40839;

	class WingedEdgeEnumerator : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::WingedEdge* m_Current; // 0x10
		::UnityEngine::ProBuilder::WingedEdge* m_Start; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_RESET_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_Current()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGEENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
