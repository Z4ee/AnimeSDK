#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::UI { class RawImage; }

#define UITOWORLDRTOUTPUT_RELEASE_OFFSET UNITYSDK_OFFSET(0x11EB2520)
#define UITOWORLDRTOUTPUT_SETRENDERTEXTURERAWIMAGE_OFFSET UNITYSDK_OFFSET(0x11EB2200)
#define UITOWORLDRTOUTPUT_SETRENDERTEXUTRE_OFFSET UNITYSDK_OFFSET(0x11EB1F30)
#define UITOWORLDRTOUTPUT_SETUI_OFFSET UNITYSDK_OFFSET(0x11EB24B0)
#define UITOWORLDRTOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB2570)

inline static constexpr unsigned int UIToWorldRTOutput_TypeDefinitionIndex = 85707;

class UIToWorldRTOutput : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* mainCamera; // 0x18
	::UnityEngine::Transform* uiParent; // 0x20
	::UnityEngine::Canvas* uiCanvas; // 0x28
	::UnityEngine::NAPRenderPipeline0::RTHandle* _rtHandle; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* ScreenMapEmission; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* ScreenMapStEmission; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOWORLDRTOUTPUT__CTOR_OFFSET))(this);
	}

	::System::Void SetRenderTexutre(::UnityEngine::Material* outputMat, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector3 cameraPosOffset)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UITOWORLDRTOUTPUT_SETRENDERTEXUTRE_OFFSET))(this, outputMat, textureSize, cameraPosOffset);
	}

	::System::Void SetRenderTextureRawImage(::UnityEngine::UI::RawImage* outputRawImage, ::UnityEngine::Vector2 textureSize, ::UnityEngine::Vector3 cameraPosOffset)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UITOWORLDRTOUTPUT_SETRENDERTEXTURERAWIMAGE_OFFSET))(this, outputRawImage, textureSize, cameraPosOffset);
	}

	::System::Void SetUI(::UnityEngine::Transform* ui)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UITOWORLDRTOUTPUT_SETUI_OFFSET))(this, ui);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOWORLDRTOUTPUT_RELEASE_OFFSET))(this);
	}
};
