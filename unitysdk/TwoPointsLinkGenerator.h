#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy::Shapes { class CSRectangle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define TWOPOINTSLINKGENERATOR_SETUPMATERIALS_OFFSET UNITYSDK_OFFSET(0x1A15B910)
#define TWOPOINTSLINKGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A15BB70)
#define TWOPOINTSLINKGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15C0D0)

inline static constexpr unsigned int TwoPointsLinkGenerator_TypeDefinitionIndex = 41747;

class TwoPointsLinkGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* startObject; // 0x18
	::UnityEngine::GameObject* endObject; // 0x20
	::System::Single width; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials; // 0x30
	::FluffyUnderware::Curvy::Shapes::CSRectangle* rect0; // 0x38
	::FluffyUnderware::Curvy::Shapes::CSRectangle* rect1; // 0x40
	::UnityEngine::GameObject* meshRoot; // 0x48
	::UnityEngine::GameObject* startPoint; // 0x50
	::UnityEngine::GameObject* endPoint; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWOPOINTSLINKGENERATOR__CTOR_OFFSET))(this);
	}

	::System::Void SetupMaterials()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWOPOINTSLINKGENERATOR_SETUPMATERIALS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWOPOINTSLINKGENERATOR_UPDATE_OFFSET))(this);
	}
};
