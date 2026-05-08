#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define TIRETRACKSPRINTER_BEZIERPOINT_OFFSET UNITYSDK_OFFSET(0x1A158710)
#define TIRETRACKSPRINTER_CREATEWHEELMESHROOT_OFFSET UNITYSDK_OFFSET(0x1A157840)
#define TIRETRACKSPRINTER_DESTORYWHEEL_OFFSET UNITYSDK_OFFSET(0x1A1575A0)
#define TIRETRACKSPRINTER_GENERATEWHEELMESH_OFFSET UNITYSDK_OFFSET(0x1A158890)
#define TIRETRACKSPRINTER_INITWHEELDATA_OFFSET UNITYSDK_OFFSET(0x1A156680)
#define TIRETRACKSPRINTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A156940)
#define TIRETRACKSPRINTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A156630)
#define TIRETRACKSPRINTER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A156A90)
#define TIRETRACKSPRINTER_REMOVEWHEELDATA_OFFSET UNITYSDK_OFFSET(0x1A156990)
#define TIRETRACKSPRINTER_RESETWHEELDATAARRAY_OFFSET UNITYSDK_OFFSET(0x1A157490)
#define TIRETRACKSPRINTER_TICKWHEELPRINT_OFFSET UNITYSDK_OFFSET(0x1A156B40)
#define TIRETRACKSPRINTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A156AE0)
#define TIRETRACKSPRINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1597F0)

inline static constexpr unsigned int TireTracksPrinter_TypeDefinitionIndex = 41506;

class TireTracksPrinter : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 kMaxWheelVertexCount = 0x1F4; // 0x0
	// static const ::System::Int32 kMaxWheelPosCount = 0xFA; // 0x0
	::System::Single SpawnDist; // 0x18
	::System::Single wheelUVScale; // 0x1C
	::System::Int32 fadeInRange; // 0x20
	::System::Single wheelWidth; // 0x24
	::System::Single wheelDurationTime; // 0x28
	::System::Single wheelDurationDistance; // 0x2C
	::System::Single wheelTracksHardness; // 0x30
	::System::Single WheelTeleportThreshold; // 0x34
	::UnityEngine::Material* wheelMaterial; // 0x38
	::System::Boolean interpolationOn; // 0x40
	::System::Int32 interpolationCount; // 0x44
	::System::Boolean startPreGenerateTranslucently; // 0x48
	::System::Int32 preGenerateTranslucentRange; // 0x4C
	::System::Boolean permanentGenerateTranslucently; // 0x50
	::System::Int32 permanentGenerateTranslucentRange; // 0x54
	::UnityEngine::Mesh* wheelMesh; // 0x58
	::UnityEngine::GameObject* wheelRoot; // 0x60
	::UnityEngine::MeshFilter* wheelMeshFilter; // 0x68
	::UnityEngine::MeshRenderer* wheelMeshRenderer; // 0x70
	::Il2CppArray<::UnityEngine::Vector3>* vertsPos; // 0x78
	::Il2CppArray<::UnityEngine::Vector2>* vertsUV; // 0x80
	::Il2CppArray<::UnityEngine::Color>* vertsColor; // 0x88
	::Il2CppArray<::UnityEngine::Vector3>* vertsNormal; // 0x90
	::Il2CppArray<::System::Int32>* vertsTriangles; // 0x98
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Vector4, ::System::Single, ::System::Int32>>* vertsPosNoValid; // 0xA0
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Vector4, ::System::Single, ::System::Int32>>* vertsPosIsValid; // 0xA8
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Vector4, ::System::Single, ::System::Int32>>* posTimes; // 0xB0
	::System::Int32 wheelMaxVertsCount; // 0xB8
	::System::Single wheelSpawnDist; // 0xBC
	::UnityEngine::Vector3 lastSpawnPos; // 0xC0
	::System::Boolean wheelDataIsInitizlied; // 0xCC
	::System::Single fadeOutLifeTime; // 0xD0
	::System::Int32 posTimeIndex; // 0xD4
	::System::Int32 fadeInVertexCount; // 0xD8
	::System::Int32 preGenerateCount; // 0xDC
	::System::Int32 permanentTranslucentCount; // 0xE0
	::System::Single preGenerateAlphaDiffer; // 0xE4
	::System::Single permanentGenerateAlphaDiffer; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_UPDATE_OFFSET))(this);
	}

	::System::Void InitWheelData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_INITWHEELDATA_OFFSET))(this);
	}

	::System::Void ResetWheelDataArray(::UnityEngine::Vector3 pos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_RESETWHEELDATAARRAY_OFFSET))(this, pos);
	}

	::System::Void RemoveWheelData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_REMOVEWHEELDATA_OFFSET))(this);
	}

	::System::Void CreateWheelMeshRoot()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_CREATEWHEELMESHROOT_OFFSET))(this);
	}

	::System::Void DestoryWheel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_DESTORYWHEEL_OFFSET))(this);
	}

	::System::Void TickWheelPrint(::System::Single currentTime, ::System::Single fadeOutLifeTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_TICKWHEELPRINT_OFFSET))(this, currentTime, fadeOutLifeTime);
	}

	::System::Void GenerateWheelMesh(::System::Single currentTime, ::System::Single fadeOutLifeTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_GENERATEWHEELMESH_OFFSET))(this, currentTime, fadeOutLifeTime);
	}

	::UnityEngine::Vector3 BezierPoint(::UnityEngine::Vector3 pPrev, ::UnityEngine::Vector3 pCur, ::UnityEngine::Vector3 pNext, ::System::Single t)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + TIRETRACKSPRINTER_BEZIERPOINT_OFFSET))(this, pPrev, pCur, pNext, t);
	}
};
