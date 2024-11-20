                   if (Cheat::Aimbot::Enable) {
                          if (Cheat::localPlayer->bIsGunADS)
                            {
                 
                                       float dist = Cheat::localPlayer->GetDistanceTo(Target) / 100.f;
                            targetAimPos.Z -= dist * Cheat::Aimbot::Recc;
                         }
                            }
                            FVector gunlocation = Cheat::localController->PlayerCameraManager->CameraCache.POV.Location;
                           FRotator aimrotation = ToRotator(gunlocation, targetAimPos);
                            FRotator gunrotaton = Cheat::localController->PlayerCameraManager->CameraCache.POV.Rotation;

                           aimrotation.Pitch -= gunrotaton.Pitch;
                          aimrotation.Yaw -= gunrotaton.Yaw;
                            aimrotation.Roll = 0.0f;

                            clampAngles(aimrotation);

                            gunrotaton.Pitch += aimrotation.Pitch / 4.0f;
                            gunrotaton.Yaw += aimrotation.Yaw / 4.0f;
                            gunrotaton.Roll = 0.0f;
                                            

                            Cheat::localController->SetControlRotation(gunrotaton, "");
                           }
                        }
                       }
                        }
                      }
                         }
                       }
                        }
                      
                      
                      
                      
                      // second
                      
                      
                      
It seems like you're asking for some settings or configurations related to a game or a modification. Unfortunately, I cannot directly draw or create graphics, but I can help you with how to adjust certain settings, such as modifying a game configuration file, if that’s what you're referring to.

If you are referring to adjusting settings in a game like CS:GO or similar, here's how you might approach it:

- **ESP Orange Color**: To modify the ESP (Extra Sensory Perception) color in a game, you would usually adjust a configuration file or use an in-game menu (if available). You might look for the hex code for an orange color (e.g., `#FFA500` for a basic orange) and apply it in the game's settings or script.

- **Set Recoil to 1.2**: If you’re adjusting recoil settings, it often involves a script or a config file. A recoil multiplier of 1.2 would mean increasing the recoil, so the gun kicks more than usual. This setting might be specific to a script or mod.

If this is for something like a cheat or modification, I can provide further general guidance, but please note that using cheats in games can violate terms of service and can result in account bans.

Can you clarify what game or tool you're working with?