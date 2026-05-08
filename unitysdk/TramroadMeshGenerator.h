#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Generator::Modules { class BuildShapeExtrusion; }
namespace FluffyUnderware::Curvy::Generator::Modules { class InputSplinePath; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ModifierPathRelativeTranslation; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ModifierTRSShape; }
namespace FluffyUnderware::Curvy::Shapes { class CSRectangle; }
namespace UnityEngine { class GameObject; }

#define TRAMROADMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17926430)

inline static constexpr unsigned int TramroadMeshGenerator_TypeDefinitionIndex = 56598;

class TramroadMeshGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* TramroadMeshPrefab; // 0x18
	::System::Single height; // 0x20
	::System::Single distance; // 0x24
	::System::Int32 subdivision; // 0x28
	::FluffyUnderware::Curvy::Generator::Modules::InputSplinePath* inputSplinePath; // 0x30
	::FluffyUnderware::Curvy::Shapes::CSRectangle* rectangleShape; // 0x38
	::FluffyUnderware::Curvy::Generator::Modules::ModifierPathRelativeTranslation* pathOffset1; // 0x40
	::FluffyUnderware::Curvy::Generator::Modules::ModifierPathRelativeTranslation* pathOffset2; // 0x48
	::FluffyUnderware::Curvy::Generator::Modules::ModifierTRSShape* trsShape; // 0x50
	::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion* buildShapeExtrusion1; // 0x58
	::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion* buildShapeExtrusion2; // 0x60
	::FluffyUnderware::Curvy::CurvySpline* spline; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAMROADMESHGENERATOR__CTOR_OFFSET))(this);
	}
};
