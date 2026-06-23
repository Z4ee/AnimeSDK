#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UIElements/UIR/BMPAlloc.h"
#include "unitysdk/UnityEngine/UIElements/UIR/Implementation/ClipMethod.h"
#include "unitysdk/UnityEngine/UIElements/UIR/RenderChainTextEntry.h"
#include "unitysdk/UnityEngine/UIElements/UIR/RenderDataDirtyTypes.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR { class MeshHandle; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainVEData_TypeDefinitionIndex = 27611;

	struct alignas(8) RenderChainVEData
	{
		::UnityEngine::UIElements::VisualElement* prev; // 0x10
		::UnityEngine::UIElements::VisualElement* next; // 0x18
		::UnityEngine::UIElements::VisualElement* groupTransformAncestor; // 0x20
		::UnityEngine::UIElements::VisualElement* boneTransformAncestor; // 0x28
		::UnityEngine::UIElements::VisualElement* prevDirty; // 0x30
		::UnityEngine::UIElements::VisualElement* nextDirty; // 0x38
		::System::Int32 hierarchyDepth; // 0x40
		::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues; // 0x44
		::System::UInt32 dirtyID; // 0x48
		::UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod; // 0x4C
		::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand; // 0x50
		::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand; // 0x58
		::UnityEngine::UIElements::UIR::RenderChainCommand* firstClosingCommand; // 0x60
		::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingCommand; // 0x68
		::System::Boolean isInChain; // 0x70
		::System::Boolean isStencilClipped; // 0x71
		::System::Boolean isHierarchyHidden; // 0x72
		::System::Boolean usesAtlas; // 0x73
		::System::Boolean disableNudging; // 0x74
		::System::Boolean usesLegacyText; // 0x75
		::UnityEngine::UIElements::UIR::MeshHandle* data; // 0x78
		::UnityEngine::UIElements::UIR::MeshHandle* closingData; // 0x80
		::UnityEngine::Matrix4x4 verticesSpace; // 0x88
		::System::Int32 displacementUVStart; // 0xC8
		::System::Int32 displacementUVEnd; // 0xCC
		::UnityEngine::UIElements::UIR::BMPAlloc transformID; // 0xD0
		::UnityEngine::UIElements::UIR::BMPAlloc clipRectID; // 0xD8
		::UnityEngine::UIElements::UIR::BMPAlloc opacityID; // 0xE0
		::System::Single compositeOpacity; // 0xE8
		::UnityEngine::UIElements::VisualElement* prevText; // 0xF0
		::UnityEngine::UIElements::VisualElement* nextText; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>* textEntries; // 0x100
	};
}
